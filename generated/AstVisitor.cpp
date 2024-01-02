#include <cassert>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <exception>    
#include "utils.h"
#include "AstVisitor.h"
#include "ast.h"

using namespace frontend;

std::unique_ptr<CompileUnit> AstVisitor::compileUnit() {
    return std::move(m_compile_unit);
}

antlrcpp::Any
AstVisitor::visitCompUnit(SysyParser::CompUnitContext *const ctx) {
    std::vector<CompileUnit::Child> children;
    
    createSymbolTable();

    for (auto item : ctx->compUnitItem()) {
        if (auto decl = item->decl()) {
            auto const decls =
                    decl->accept(this).as<std::shared_ptr<std::vector<Declaration *>>>();
            for (auto d : *decls) {
                children.emplace_back(std::unique_ptr<Declaration>(d));
            }
        } else if (auto func_ = item->funcDef()) {
            auto const func = func_->accept(this).as<Function *>();
            children.emplace_back(std::unique_ptr<Function>(func));
        } else {
            assert(false);
        }
    }
    
    destroySymbolTable();
    
    auto compile_unit = new CompileUnit(std::move(children));
    m_compile_unit.reset(compile_unit);
    return compile_unit;
}

antlrcpp::Any
AstVisitor::visitConstDecl(SysyParser::ConstDeclContext *const ctx) {
    auto const base_type_ = ctx->bType()->accept(this).as<ScalarType *>();
    std::unique_ptr<ScalarType> base_type(base_type_);
    std::vector<Declaration *> ret;
    for (auto def : ctx->constDef()) {
        Identifier ident(def->Ident()->getText());
        auto dimensions = this->visitDimensions(def->exp());
        std::unique_ptr<SysYType> type;
        if (dimensions.empty()) {
            type = std::make_unique<ScalarType>(*base_type);
        } else {
            type =
                    std::make_unique<ArrayType>(*base_type, std::move(dimensions), false);
        }
        auto const init_ = def->initVal()->accept(this).as<Initializer *>();
        std::unique_ptr<Initializer> init(init_);
        ret.push_back(new Declaration(std::move(type), std::move(ident),
                                      std::move(init), true));
        if (insertDecl(ret.back())) {
            debug(std::cerr) << "ins\n";
        } else {
            error(std::cerr) << "Error type [" << err_type << "] at line [?]" << " : " << msg << "\n";
        }
    }
    return std::make_shared<std::vector<Declaration *>>(std::move(ret));
}

antlrcpp::Any AstVisitor::visitInt(SysyParser::IntContext *const ctx) {
    return new ScalarType(Int);
}

antlrcpp::Any AstVisitor::visitFloat(SysyParser::FloatContext *const ctx) {
    return new ScalarType(Float);
}

antlrcpp::Any AstVisitor::visitVarDecl(SysyParser::VarDeclContext *const ctx) {
    auto const base_type_ = ctx->bType()->accept(this).as<ScalarType *>();
    std::unique_ptr<ScalarType> base_type(base_type_);
    std::vector<Declaration *> ret;
    for (auto def : ctx->varDef()) {
        Identifier ident(def->Ident()->getText());
        auto dimensions = this->visitDimensions(def->exp());
        std::unique_ptr<SysYType> type;
        if (dimensions.empty()) {
            type = std::make_unique<ScalarType>(*base_type);
        } else {
            type =
                    std::make_unique<ArrayType>(*base_type, std::move(dimensions), false);
        }
        std::unique_ptr<Initializer> init;
        if (auto init_val = def->initVal()) {
            init.reset(init_val->accept(this).as<Initializer *>());
        }
        ret.push_back(new Declaration(std::move(type), std::move(ident),
                                      std::move(init), false));

        if (insertDecl(ret.back()))  {
            debug(std::cerr) << "ins\n";
        } else {
            error(std::cerr) << "Error type [" << err_type << "] at line [?]" << " : " << msg << "\n";
        }
        
    }
    return std::make_shared<std::vector<Declaration *>>(std::move(ret));
}

antlrcpp::Any AstVisitor::visitInit(SysyParser::InitContext *const ctx) {
    auto expr_ = ctx->exp()->accept(this).as<Expression *>();
    std::unique_ptr<Expression> expr(expr_);
    return new Initializer(std::move(expr));
}

antlrcpp::Any
AstVisitor::visitInitList(SysyParser::InitListContext *const ctx) {
    std::vector<std::unique_ptr<Initializer>> values;
    for (auto init : ctx->initVal()) {
        auto const value = init->accept(this).as<Initializer *>();
        values.emplace_back(value);
    }
    return new Initializer(std::move(values));
}

antlrcpp::Any AstVisitor::visitFuncDef(SysyParser::FuncDefContext *const ctx) {
    auto const type_ = ctx->funcType()->accept(this).as<ScalarType *>();
    return_type = type_->type();
    in_func = 1;
    
    std::unique_ptr<ScalarType> type(type_);
    Identifier ident(ctx->Ident()->getText(), false);
    std::vector<std::unique_ptr<Parameter>> params;
    if (auto params_ = ctx->funcFParams()) {
        for (auto param_ : params_->funcFParam()) {
            auto const param = param_->accept(this).as<Parameter *>();
            params.emplace_back(param);
        }
    }


    if (insertFunc(type.get(), ident, params))  {
        debug(std::cerr) << "ins\n";
    } else {
        error(std::cerr) << "Error type [" << err_type << "] at line [?]" << " : " << msg << "\n";
    }
    createSymbolTable();
    for (auto &p : params) {
        if (insertParam(p.get())) {
            debug(std::cerr) << "ins\n";
        } else {
            error(std::cerr) << "Error type [" << err_type << "] at line [?]" << " : " << msg << "\n";
        }

    }
    auto const body_ = ctx->block()->accept(this).as<Block *>();
    std::unique_ptr<Block> body(body_);
    auto ptr = new Function(std::move(type), std::move(ident), std::move(params),
                        std::move(body));

    destroySymbolTable();

    return_type = 0;
    in_func = 0;
    return ptr;
}

antlrcpp::Any AstVisitor::visitVoid(SysyParser::VoidContext *const ctx) {
    return static_cast<ScalarType *>(nullptr);
}

antlrcpp::Any
AstVisitor::visitScalarParam(SysyParser::ScalarParamContext *const ctx) {
    auto const type_ = ctx->bType()->accept(this).as<ScalarType *>();
    std::unique_ptr<SysYType> type(type_);
    Identifier ident(ctx->Ident()->getText());
    return new Parameter(std::move(type), std::move(ident));
}

antlrcpp::Any AstVisitor::visitArrayParam(SysyParser::ArrayParamContext *ctx) {
    auto const basic_type_ = ctx->bType()->accept(this).as<ScalarType *>();
    std::unique_ptr<ScalarType> basic_type(basic_type_);
    Identifier ident(ctx->Ident()->getText());
    auto dimensions = this->visitDimensions(ctx->exp());
    std::unique_ptr<SysYType> type(
            new ArrayType(*basic_type, std::move(dimensions), true));
    return new Parameter(std::move(type), std::move(ident));
}

antlrcpp::Any AstVisitor::visitBlock(SysyParser::BlockContext *const ctx) {
    std::vector<Block::Child> children;
    // 新作用域
    createSymbolTable();

    for (auto item : ctx->blockItem()) {
        if (auto decl = item->decl()) {
            auto const decls =
                    decl->accept(this).as<std::shared_ptr<std::vector<Declaration *>>>();
            for (auto d : *decls) {
                children.emplace_back(std::unique_ptr<Declaration>(d));
            }
        } else if (auto stmt_ = item->stmt()) {
            auto const stmt = stmt_->accept(this).as<Statement *>();
            children.emplace_back(std::unique_ptr<Statement>(stmt));
        } else {
            assert(false);
        }
    }


    // 访问完毕，作用域结束
    destroySymbolTable();
    return new Block(std::move(children));
}

antlrcpp::Any AstVisitor::visitAssign(SysyParser::AssignContext *const ctx) {
    auto const lhs_ = ctx->lVal()->accept(this).as<LValue *>();
    auto ltype = current_type;
    std::unique_ptr<LValue> lhs(lhs_);
    auto const rhs_ = ctx->exp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    std::unique_ptr<Expression> rhs(rhs_);
    auto const ret = new Assignment(std::move(lhs), std::move(rhs));
    if (ltype.is_array || rtype.is_array) {
        error(std::cerr) << "Error type 6 " << "at line ? " << ":" << "array cannot assign\n";
    }
    if (ltype.base_type != rtype.base_type) {
        error(std::cerr) << "Error type 5 " << "at line ? " << ":" << ltype.base_type << " "<< rtype.base_type << "operand type not same\n";
        // 可以实现隐式类型转换，但是先开摆了 
    }
    return static_cast<Statement *>(ret);
}

antlrcpp::Any
AstVisitor::visitExprStmt(SysyParser::ExprStmtContext *const ctx) {
    std::unique_ptr<Expression> expr;
    if (auto expr_ = ctx->exp()) {
        expr.reset(expr_->accept(this).as<Expression *>());
    }
    auto const ret = new ExprStmt(std::move(expr));
    return static_cast<Statement *>(ret);
}

antlrcpp::Any
AstVisitor::visitBlockStmt(SysyParser::BlockStmtContext *const ctx) {
    auto const ret = ctx->block()->accept(this).as<Block *>();
    return static_cast<Statement *>(ret);
}

antlrcpp::Any AstVisitor::visitIfElse(SysyParser::IfElseContext *const ctx) {
    auto const cond_ = ctx->cond()->accept(this).as<Expression *>();
    std::unique_ptr<Expression> cond(cond_);
    auto const then_ = ctx->stmt(0)->accept(this).as<Statement *>();
    std::unique_ptr<Statement> then(then_);
    std::unique_ptr<Statement> else_;
    if (ctx->Else() != nullptr) {
        else_.reset(ctx->stmt(1)->accept(this).as<Statement *>());
    }
    auto const ret =
            new IfElse(std::move(cond), std::move(then), std::move(else_));
    return static_cast<Statement *>(ret);
}

antlrcpp::Any AstVisitor::visitWhile(SysyParser::WhileContext *const ctx) {
    auto const cond_ = ctx->cond()->accept(this).as<Expression *>();
    std::unique_ptr<Expression> cond(cond_);
    
    // 进入while
    this->m_loop_depth ++;

    auto const body_ = ctx->stmt()->accept(this).as<Statement *>();
    std::unique_ptr<Statement> body(body_);

    // 退出while
    this->m_loop_depth --;

    auto const ret = new While(std::move(cond), std::move(body));
    return static_cast<Statement *>(ret);
}

antlrcpp::Any AstVisitor::visitBreak(SysyParser::BreakContext *const ctx) {
    if (this->m_loop_depth == 0) {
        error(std::cerr) << " at line ?" << " break statement not in loop\n";
    }

    auto const ret = new Break;
    return static_cast<Statement *>(ret);
}

antlrcpp::Any
AstVisitor::visitContinue(SysyParser::ContinueContext *const ctx) {
    if (this->m_loop_depth == 0) {
        error(std::cerr) << " at line ?" << " continue statement not in loop\n";
    }

    auto const ret = new Continue;
    return static_cast<Statement *>(ret);
}

antlrcpp::Any AstVisitor::visitReturn(SysyParser::ReturnContext *const ctx) {
    std::unique_ptr<Expression> res;
    if (auto exp = ctx->exp()) {
        res.reset(exp->accept(this).as<Expression *>());
    }

    if (in_func == 0) {
        error(std::cerr) << " at line ?" << " return statement not in function\n";
    } else if (return_type == 0 && res != nullptr) {
        error(std::cerr) << " at line ?" << " return statement in void function\n";
    } else if (current_type.is_array || current_type.base_type != return_type) {
        error(std::cerr) << " at line ?" << " return type not match\n";
        debug(std::cerr) << (current_type.is_array ? "ARRERR" : "TPERR") << "\n";
    }

    auto const ret = new Return(std::move(res));
    return static_cast<Statement *>(ret);
}

//要调用检查
antlrcpp::Any AstVisitor::visitLVal(SysyParser::LValContext *const ctx) {
    Identifier ident(ctx->Ident()->getText());

    auto have = lookup(ident.name());
    

    std::vector<std::unique_ptr<Expression>> indices;
    for (auto exp : ctx->exp()) {
        auto const index = exp->accept(this).as<Expression *>();
        if (current_type.is_array || current_type.is_func || current_type.base_type != Int) {
            error(std::cerr) << "Error type " << 7 << " at line ?" << " : " << " index not a int\n";
        }
        indices.emplace_back(index);
    }
    if (have == nullptr) {
        current_type = Entry();
        error(std::cerr) << " at line ?" << " undefined variable : " << ident.name() << "\n";
    } else if (have->is_func) {
        current_type = Entry();
        error(std::cerr) << "Error type " << 6 << " at line ?" << " : " << ident.name() << "not a variable\n";
        // debug(std::cerr) << "340:CUR : " << current_type.base_type << " " << current_type.is_array << " " << current_type.is_func << " " << current_type.is_const << "\n";
    } else {
        // debug(std::cerr) << "found " << ident.name() << "\n";
        // debug(std::cerr) << have->base_type << " " << have->is_array << " " << have->is_func << " " << have->is_const << "\n";
        current_type = *have;
        // debug(std::cerr) << "340:CUR : " << current_type.base_type << " " << current_type.is_array << " " << current_type.is_func << " " << current_type.is_const << "\n";

        if (indices.size() > have->dimensions.size()) {
            error(std::cerr) << "Error type " << 8 << " at line ?" << " : " << " index too many\n";
        } else {
            current_type.dimensions = std::vector(have->dimensions.begin() + indices.size() , have->dimensions.end());
            if (current_type.dimensions.size() == 0) current_type.is_array = false;
        }
        // debug(std::cerr) << have->base_type << " " << have->is_array << " " << have->is_func << " " << have->is_const << "\n";
        // debug(std::cerr) << "349:CUR : " << current_type.base_type << " " << current_type.is_array << " " << current_type.is_func << " " << current_type.is_const << "\n";
    }
    // debug(std::cerr) << "354:CUR _ lval: " << current_type.base_type << " " << current_type.is_array << " " << current_type.is_func << " " << current_type.is_const << "\n";

    return new LValue(std::move(ident), std::move(indices));
}

antlrcpp::Any
AstVisitor::visitPrimaryExp_(SysyParser::PrimaryExp_Context *const ctx) {
    if (ctx->number()) {
        return ctx->number()->accept(this);
    } else {
        assert(ctx->exp());
        return ctx->exp()->accept(this);
    }
}

antlrcpp::Any
AstVisitor::visitLValExpr(SysyParser::LValExprContext *const ctx) {
    auto const lval = ctx->lVal()->accept(this).as<LValue *>();
    // debug(std::cerr) << "372:CUR : _lavl_exp" << current_type.base_type << " " << current_type.is_array << " " << current_type.is_func << " " << current_type.is_const << "\n";
    return static_cast<Expression *>(lval);
}

antlrcpp::Any
AstVisitor::visitDecIntConst(SysyParser::DecIntConstContext *const ctx) {
    current_type = Entry();
    current_type.is_const = true;
    current_type.base_type = Int;

    return int(std::stoll(ctx->getText(), nullptr, 10));
}

antlrcpp::Any
AstVisitor::visitOctIntConst(SysyParser::OctIntConstContext *const ctx) {
    current_type = Entry();
    current_type.is_const = true;
    current_type.base_type = Int;

    return int(std::stoll(ctx->getText(), nullptr, 8));
}

antlrcpp::Any
AstVisitor::visitHexIntConst(SysyParser::HexIntConstContext *const ctx) {
    current_type = Entry();
    current_type.is_const = true;
    current_type.base_type = Int;

    return int(std::stoll(ctx->getText(), nullptr, 16));
}

antlrcpp::Any
AstVisitor::visitDecFloatConst(SysyParser::DecFloatConstContext *const ctx) {
    current_type = Entry();
    current_type.is_const = true;
    current_type.base_type = Float;

    return std::stof(ctx->getText());
}

antlrcpp::Any
AstVisitor::visitHexFloatConst(SysyParser::HexFloatConstContext *const ctx) {
    current_type = Entry();
    current_type.is_const = true;
    current_type.base_type = Float;
    
    return std::stof(ctx->getText());
}
//调用检查
antlrcpp::Any AstVisitor::visitCall(SysyParser::CallContext *const ctx) {
    Identifier ident(ctx->Ident()->getText(), false);
    Entry* tmp = lookup(ident.name());
    if(tmp == nullptr){
        error(std::cerr) << " at line ?" << " undefined function : " << ident.name() << "\n";
    } else if (tmp->is_func==false){
        error(std::cerr) << "Error type:" << 5 << " at line :" << ident.name() << "not a function\n" ;
    }

    std::vector<Entry> parm_type;
    // parm_type.clear();没用的
    std::vector<Call::Argument> args;
    auto args_ctx = ctx->funcRParams();
    if (args_ctx) {
        for (auto arg_ : args_ctx->funcRParam()) {
            if (auto exp = arg_->exp()) {
                auto const arg = exp->accept(this).as<Expression *>();
                parm_type.push_back(current_type);
                debug(std::cerr) << "FUCK" << parm_type.size() << "\n";
                args.emplace_back(std::unique_ptr<Expression>(arg));
            } else {
                assert(false);
            }
        }
    }
        
    if (tmp != nullptr && tmp->is_func) {
        if (parm_type.size() != tmp->params.size()) {
            // ...
            debug(std::cerr) << "449 : " << parm_type.size() << " " << tmp->params.size() << "\n";
            error(std::cerr) << "Error type:" << 9 << " at line :" << " parameter size not match " << "\n";
        } else {
            //企鹅搞一下   
            auto it=tmp->params.begin();
            auto it2=parm_type.begin();
            for(;it!=tmp->params.end();){
                if(it->base_type!=it2->base_type){
                    error(std::cerr) << "Error type:" << 9 << " at line :" << " parameter type not match "<<"\n";
                }
                it++;
                it2++;
            }
            // for...
        }
        current_type = Entry();
        current_type.base_type = tmp->base_type;
    }
    
    auto const ret =
            new Call(std::move(ident), std::move(args), ctx->getStart()->getLine());
    return static_cast<Expression *>(ret);
}

antlrcpp::Any
AstVisitor::visitUnaryAdd(SysyParser::UnaryAddContext *const ctx) {
    auto const operand = ctx->unaryExp()->accept(this).as<Expression *>();
    // curtype no change 
    auto const ret =
            new UnaryExpr(UnaryOp::Add, std::unique_ptr<Expression>(operand));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any
AstVisitor::visitUnarySub(SysyParser::UnarySubContext *const ctx) {
    auto const operand = ctx->unaryExp()->accept(this).as<Expression *>();
    // curtype no change 
    auto const ret =
            new UnaryExpr(UnaryOp::Sub, std::unique_ptr<Expression>(operand));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitNot(SysyParser::NotContext *const ctx) {
    auto const operand = ctx->unaryExp()->accept(this).as<Expression *>();
    // curtype no change 
    auto const ret =
            new UnaryExpr(UnaryOp::Not, std::unique_ptr<Expression>(operand));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitMul(SysyParser::MulContext *const ctx) {
    auto const lhs = ctx->mulExp()->accept(this).as<Expression *>();
    auto ltype = current_type;
    auto const rhs = ctx->unaryExp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    auto const ret =
            new BinaryExpr(BinaryOp::Mul, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));

    assert(!ltype.is_func && !rtype.is_func);
    if (ltype.is_array || rtype.is_array) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << "array cannot mul\n";
    }
    if (ltype.base_type != rtype.base_type) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << ltype.base_type << " "<< rtype.base_type << "operand type not same\n";
        // 可以实现隐式类型转换，但是先开摆了 
    }
    current_type = ltype;
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitDiv(SysyParser::DivContext *const ctx) {
    auto const lhs = ctx->mulExp()->accept(this).as<Expression *>();
    auto ltype = current_type;
    auto const rhs = ctx->unaryExp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    auto const ret =
            new BinaryExpr(BinaryOp::Div, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    assert(!ltype.is_func && !rtype.is_func);
    if (ltype.is_array || rtype.is_array) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << "array cannot div\n";
    }
    if (ltype.base_type != rtype.base_type) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << ltype.base_type << " "<< rtype.base_type << "operand type not same\n";
        // 可以实现隐式类型转换，但是先开摆了 
    }
    current_type = ltype;
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitMod(SysyParser::ModContext *const ctx) {
    auto const lhs = ctx->mulExp()->accept(this).as<Expression *>();
    auto ltype = current_type;
    auto const rhs = ctx->unaryExp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    auto const ret =
            new BinaryExpr(BinaryOp::Mod, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    assert(!ltype.is_func && !rtype.is_func);
    if (ltype.is_array || rtype.is_array) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << "array cannot mod\n";
    }
    if (ltype.base_type != rtype.base_type) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << ltype.base_type << " "<< rtype.base_type << "operand type not same\n";
        // 可以实现隐式类型转换，但是先开摆了 
    }
    current_type = ltype;
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitAdd(SysyParser::AddContext *const ctx) {
    auto const lhs = ctx->addExp()->accept(this).as<Expression *>();
    auto ltype = current_type;
    auto const rhs = ctx->mulExp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    auto const ret =
            new BinaryExpr(BinaryOp::Add, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    assert(!ltype.is_func && !rtype.is_func);
    if (ltype.is_array || rtype.is_array) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << "array cannot add\n";
    }
    if (ltype.base_type != rtype.base_type) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << ltype.base_type << " "<< rtype.base_type << "operand type not same\n";
        // 可以实现隐式类型转换，但是先开摆了 
    }
    current_type = ltype;
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitSub(SysyParser::SubContext *const ctx) {
    auto const lhs = ctx->addExp()->accept(this).as<Expression *>();
    // debug(std::cerr) << "580:CUR_SUB : " << current_type.base_type << " " << current_type.is_array << " " << current_type.is_func << " " << current_type.is_const << "\n";

    auto ltype = current_type;
    auto const rhs = ctx->mulExp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    auto const ret =
            new BinaryExpr(BinaryOp::Sub, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    assert(!ltype.is_func && !rtype.is_func);
    if (ltype.is_array || rtype.is_array) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << "array cannot add\n";
    }
    if (ltype.base_type != rtype.base_type) {
        error(std::cerr) << "Error type 11 " << "at line ? " << ":" << ltype.base_type << " "<< rtype.base_type << "operand type not same\n";
        // 可以实现隐式类型转换，但是先开摆了 
    }
    current_type = ltype;
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitLt(SysyParser::LtContext *const ctx) {
    auto const lhs = ctx->relExp()->accept(this).as<Expression *>();
    auto ltype = current_type;
    auto const rhs = ctx->addExp()->accept(this).as<Expression *>();
    auto rtype = current_type;
    auto const ret =
            new BinaryExpr(BinaryOp::Lt, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    
    
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitGt(SysyParser::GtContext *const ctx) {
    auto const lhs = ctx->relExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->addExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::Gt, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitLeq(SysyParser::LeqContext *const ctx) {
    auto const lhs = ctx->relExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->addExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::Leq, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitGeq(SysyParser::GeqContext *const ctx) {
    auto const lhs = ctx->relExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->addExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::Geq, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitEq(SysyParser::EqContext *const ctx) {
    auto const lhs = ctx->eqExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->relExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::Eq, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitNeq(SysyParser::NeqContext *const ctx) {
    auto const lhs = ctx->eqExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->relExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::Neq, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitAnd(SysyParser::AndContext *const ctx) {
    auto const lhs = ctx->lAndExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->eqExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::And, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitOr(SysyParser::OrContext *const ctx) {
    auto const lhs = ctx->lOrExp()->accept(this).as<Expression *>();
    auto const rhs = ctx->lAndExp()->accept(this).as<Expression *>();
    auto const ret =
            new BinaryExpr(BinaryOp::Or, std::unique_ptr<Expression>(lhs),
                           std::unique_ptr<Expression>(rhs));
    return static_cast<Expression *>(ret);
}

antlrcpp::Any AstVisitor::visitNumber(SysyParser::NumberContext *const ctx) {
    if (ctx->intConst()) {
        auto val = ctx->intConst()->accept(this).as<IntLiteral::Value>();
        auto literal = new IntLiteral{val};
        return static_cast<Expression *>(literal);
    }
    if (ctx->floatConst()) {
        auto val = ctx->floatConst()->accept(this).as<FloatLiteral::Value>();
        auto literal = new FloatLiteral{val};        
        return static_cast<Expression *>(literal);
    }
    //no type change
    assert(false);
    return static_cast<Expression *>(nullptr);
}

std::vector<std::unique_ptr<Expression>>
AstVisitor::visitDimensions(const std::vector<SysyParser::ExpContext *> &ctxs) {
    std::vector<std::unique_ptr<Expression>> ret;
    for (auto expr_ctx : ctxs) {
        auto expr_ = expr_ctx->accept(this).as<Expression *>();
        ret.emplace_back(expr_);
    }
    return ret;
}

AstVisitor::Entry* AstVisitor::lookup(const std::string& name) {
    for(auto it = m_symbol_table.begin(); it != m_symbol_table.end(); it++){
        auto it2 = it->find(name);
        if(it2 != it->end()){
            return &it2->second;
        }    
    }
    return nullptr;
}

void AstVisitor::createSymbolTable() {
    std::map<std::string, Entry> tmp;
    m_symbol_table.push_front(tmp);
}

void AstVisitor::destroySymbolTable() {
    m_symbol_table.pop_front();
}
    //确定类型
AstVisitor::Entry::Entry(SysYType *p)  {
    is_const = is_array = is_func = false;
    dimensions = std::vector<int>();
    params = std::vector<Entry>();
    if (auto scal = dynamic_cast<ScalarType*>(p)) {
        is_array = false;
        dimensions = std::vector<int>();
        base_type = scal->type();
        // debug(std::cerr) << "TYPE1: " << base_type << " " << scal->type() << "\n"; 
    } else if (auto arr = dynamic_cast<ArrayType*>(p)) {
        is_array = true;
        auto &dims = arr->dimensions();
        if (arr->first_dimension_omitted()) dimensions.push_back(-1);
        for (auto &dim : dims) {
            dimensions.push_back(0);
        }
        base_type = arr->base_type();
        // debug(std::cerr) << "TYPE2: " << base_type << " " << arr->base_type() << "\n";
    } else {
        // debug(std::cerr) << "TYPE: " << "FALSE\n";
        assert(false);
    }  
}

AstVisitor::Entry::Entry(const Declaration* decl) : Entry(decl->type().get()) {
    is_const = decl->const_qualified();
    is_func = false;
    params = std::vector<Entry>();
}

AstVisitor::Entry::Entry(const Parameter* decl): Entry(decl->type().get()) {
    debug(std::cerr) << this->base_type << "\n";
    is_const = false;
    is_func = false;
    dimensions = std::vector<int>();
    params = std::vector<Entry>();
}

bool AstVisitor::insertDecl(const Declaration* decl) {
    auto &cur_table = m_symbol_table.front();
    
    auto name = decl->ident().name();
    
    if (cur_table.find(name) != cur_table.end()) {
        auto cur_e = Entry(decl);
        auto prev_e = cur_table[name];
        if (cur_e.is_func == false) {
            err_type = 2;
            msg = "redeclaration of variable " + name;
        } else {
            err_type = 2;
            msg = "confilict declaration " + name;
        }
        return false;
    } else {
        cur_table[name] = Entry(decl);
        return true;
    }
}

bool AstVisitor::insertFunc(SysYType* t, const Identifier& ident, const std::vector<std::unique_ptr<Parameter>>& params) {
    auto &cur_table = m_symbol_table.front();
    
    auto name = ident.name();

    if (cur_table.find(name) != cur_table.end()) {
        auto prev_e = cur_table[name];
        if (prev_e.is_func) {
            err_type = 4;
            msg = "redeclaration of function " + name;
        } else {
            err_type = 4;
            msg = "confilict declaration " + name;
        }
        return false;
    } else {
        auto cur = Entry(t);
        cur.is_func = true;
        debug(std::cerr) << "parmSize: " << params.size() << "\n";
        for (auto& par : params) {
            cur.params.push_back(Entry(par.get()));
        }
        cur_table[name] = cur;
        return true;
    }
}

bool AstVisitor::insertParam(const Parameter* decl) {
    auto &cur_table = m_symbol_table.front();
    
    auto name = decl->ident().name();

    // int cur_type = AstVisitor::Entry::get_type(decl);

    if (cur_table.find(name) != cur_table.end()) {
        auto prev = cur_table[name];
        auto cur_e = Entry(decl);
        if (prev == cur_e) {
            err_type = 2;
            msg = "redeclaration of parameter " + name;
        } else {
            err_type = 2;
            msg = "confilict declaration of parameter " + name;
        }
        return false;
    } else {
        cur_table[name] = Entry(decl);
        return true;
    }
}