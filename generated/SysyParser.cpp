
// Generated from Sysy.g4 by ANTLR 4.7.2


#include "SysyListener.h"

#include "SysyParser.h"


using namespace antlrcpp;
using namespace antlr4;

SysyParser::SysyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SysyParser::~SysyParser() {
  delete _interpreter;
}

std::string SysyParser::getGrammarFileName() const {
  return "Sysy.g4";
}

const std::vector<std::string>& SysyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SysyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompUnitContext ------------------------------------------------------------------

SysyParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::CompUnitContext::EOF() {
  return getToken(SysyParser::EOF, 0);
}

std::vector<SysyParser::CompUnitItemContext *> SysyParser::CompUnitContext::compUnitItem() {
  return getRuleContexts<SysyParser::CompUnitItemContext>();
}

SysyParser::CompUnitItemContext* SysyParser::CompUnitContext::compUnitItem(size_t i) {
  return getRuleContext<SysyParser::CompUnitItemContext>(i);
}


size_t SysyParser::CompUnitContext::getRuleIndex() const {
  return SysyParser::RuleCompUnit;
}

void SysyParser::CompUnitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompUnit(this);
}

void SysyParser::CompUnitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompUnit(this);
}

SysyParser::CompUnitContext* SysyParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SysyParser::RuleCompUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::Int)
      | (1ULL << SysyParser::Float)
      | (1ULL << SysyParser::Void)
      | (1ULL << SysyParser::Const))) != 0)) {
      setState(66);
      compUnitItem();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    match(SysyParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompUnitItemContext ------------------------------------------------------------------

SysyParser::CompUnitItemContext::CompUnitItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::DeclContext* SysyParser::CompUnitItemContext::decl() {
  return getRuleContext<SysyParser::DeclContext>(0);
}

SysyParser::FuncDefContext* SysyParser::CompUnitItemContext::funcDef() {
  return getRuleContext<SysyParser::FuncDefContext>(0);
}


size_t SysyParser::CompUnitItemContext::getRuleIndex() const {
  return SysyParser::RuleCompUnitItem;
}

void SysyParser::CompUnitItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompUnitItem(this);
}

void SysyParser::CompUnitItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompUnitItem(this);
}

SysyParser::CompUnitItemContext* SysyParser::compUnitItem() {
  CompUnitItemContext *_localctx = _tracker.createInstance<CompUnitItemContext>(_ctx, getState());
  enterRule(_localctx, 2, SysyParser::RuleCompUnitItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(74);
      decl();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(75);
      funcDef();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

SysyParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::ConstDeclContext* SysyParser::DeclContext::constDecl() {
  return getRuleContext<SysyParser::ConstDeclContext>(0);
}

SysyParser::VarDeclContext* SysyParser::DeclContext::varDecl() {
  return getRuleContext<SysyParser::VarDeclContext>(0);
}


size_t SysyParser::DeclContext::getRuleIndex() const {
  return SysyParser::RuleDecl;
}

void SysyParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void SysyParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}

SysyParser::DeclContext* SysyParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, SysyParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::Const: {
        enterOuterAlt(_localctx, 1);
        setState(78);
        constDecl();
        break;
      }

      case SysyParser::Int:
      case SysyParser::Float: {
        enterOuterAlt(_localctx, 2);
        setState(79);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclContext ------------------------------------------------------------------

SysyParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::ConstDeclContext::Const() {
  return getToken(SysyParser::Const, 0);
}

SysyParser::BTypeContext* SysyParser::ConstDeclContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

std::vector<SysyParser::ConstDefContext *> SysyParser::ConstDeclContext::constDef() {
  return getRuleContexts<SysyParser::ConstDefContext>();
}

SysyParser::ConstDefContext* SysyParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<SysyParser::ConstDefContext>(i);
}

tree::TerminalNode* SysyParser::ConstDeclContext::Semicolon() {
  return getToken(SysyParser::Semicolon, 0);
}

std::vector<tree::TerminalNode *> SysyParser::ConstDeclContext::Comma() {
  return getTokens(SysyParser::Comma);
}

tree::TerminalNode* SysyParser::ConstDeclContext::Comma(size_t i) {
  return getToken(SysyParser::Comma, i);
}


size_t SysyParser::ConstDeclContext::getRuleIndex() const {
  return SysyParser::RuleConstDecl;
}

void SysyParser::ConstDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDecl(this);
}

void SysyParser::ConstDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDecl(this);
}

SysyParser::ConstDeclContext* SysyParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, SysyParser::RuleConstDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(SysyParser::Const);
    setState(83);
    bType();
    setState(84);
    constDef();
    setState(89);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::Comma) {
      setState(85);
      match(SysyParser::Comma);
      setState(86);
      constDef();
      setState(91);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(92);
    match(SysyParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

SysyParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::BTypeContext::getRuleIndex() const {
  return SysyParser::RuleBType;
}

void SysyParser::BTypeContext::copyFrom(BTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FloatContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::FloatContext::Float() {
  return getToken(SysyParser::Float, 0);
}

SysyParser::FloatContext::FloatContext(BTypeContext *ctx) { copyFrom(ctx); }

void SysyParser::FloatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloat(this);
}
void SysyParser::FloatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloat(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::IntContext::Int() {
  return getToken(SysyParser::Int, 0);
}

SysyParser::IntContext::IntContext(BTypeContext *ctx) { copyFrom(ctx); }

void SysyParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void SysyParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}
SysyParser::BTypeContext* SysyParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, SysyParser::RuleBType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::Int: {
        _localctx = dynamic_cast<BTypeContext *>(_tracker.createInstance<SysyParser::IntContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(94);
        match(SysyParser::Int);
        break;
      }

      case SysyParser::Float: {
        _localctx = dynamic_cast<BTypeContext *>(_tracker.createInstance<SysyParser::FloatContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(95);
        match(SysyParser::Float);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

SysyParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::ConstDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

tree::TerminalNode* SysyParser::ConstDefContext::Assign() {
  return getToken(SysyParser::Assign, 0);
}

SysyParser::InitValContext* SysyParser::ConstDefContext::initVal() {
  return getRuleContext<SysyParser::InitValContext>(0);
}

std::vector<tree::TerminalNode *> SysyParser::ConstDefContext::Lbracket() {
  return getTokens(SysyParser::Lbracket);
}

tree::TerminalNode* SysyParser::ConstDefContext::Lbracket(size_t i) {
  return getToken(SysyParser::Lbracket, i);
}

std::vector<SysyParser::ExpContext *> SysyParser::ConstDefContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::ConstDefContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::ConstDefContext::Rbracket() {
  return getTokens(SysyParser::Rbracket);
}

tree::TerminalNode* SysyParser::ConstDefContext::Rbracket(size_t i) {
  return getToken(SysyParser::Rbracket, i);
}


size_t SysyParser::ConstDefContext::getRuleIndex() const {
  return SysyParser::RuleConstDef;
}

void SysyParser::ConstDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDef(this);
}

void SysyParser::ConstDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDef(this);
}

SysyParser::ConstDefContext* SysyParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 10, SysyParser::RuleConstDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(SysyParser::Ident);
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::Lbracket) {
      setState(99);
      match(SysyParser::Lbracket);
      setState(100);
      exp();
      setState(101);
      match(SysyParser::Rbracket);
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(108);
    match(SysyParser::Assign);
    setState(109);
    initVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

SysyParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::BTypeContext* SysyParser::VarDeclContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

std::vector<SysyParser::VarDefContext *> SysyParser::VarDeclContext::varDef() {
  return getRuleContexts<SysyParser::VarDefContext>();
}

SysyParser::VarDefContext* SysyParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<SysyParser::VarDefContext>(i);
}

tree::TerminalNode* SysyParser::VarDeclContext::Semicolon() {
  return getToken(SysyParser::Semicolon, 0);
}

std::vector<tree::TerminalNode *> SysyParser::VarDeclContext::Comma() {
  return getTokens(SysyParser::Comma);
}

tree::TerminalNode* SysyParser::VarDeclContext::Comma(size_t i) {
  return getToken(SysyParser::Comma, i);
}


size_t SysyParser::VarDeclContext::getRuleIndex() const {
  return SysyParser::RuleVarDecl;
}

void SysyParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void SysyParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}

SysyParser::VarDeclContext* SysyParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 12, SysyParser::RuleVarDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    bType();
    setState(112);
    varDef();
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::Comma) {
      setState(113);
      match(SysyParser::Comma);
      setState(114);
      varDef();
      setState(119);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(120);
    match(SysyParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

SysyParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::VarDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysyParser::VarDefContext::Lbracket() {
  return getTokens(SysyParser::Lbracket);
}

tree::TerminalNode* SysyParser::VarDefContext::Lbracket(size_t i) {
  return getToken(SysyParser::Lbracket, i);
}

std::vector<SysyParser::ExpContext *> SysyParser::VarDefContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::VarDefContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::VarDefContext::Rbracket() {
  return getTokens(SysyParser::Rbracket);
}

tree::TerminalNode* SysyParser::VarDefContext::Rbracket(size_t i) {
  return getToken(SysyParser::Rbracket, i);
}

tree::TerminalNode* SysyParser::VarDefContext::Assign() {
  return getToken(SysyParser::Assign, 0);
}

SysyParser::InitValContext* SysyParser::VarDefContext::initVal() {
  return getRuleContext<SysyParser::InitValContext>(0);
}


size_t SysyParser::VarDefContext::getRuleIndex() const {
  return SysyParser::RuleVarDef;
}

void SysyParser::VarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDef(this);
}

void SysyParser::VarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDef(this);
}

SysyParser::VarDefContext* SysyParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 14, SysyParser::RuleVarDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(SysyParser::Ident);
    setState(129);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::Lbracket) {
      setState(123);
      match(SysyParser::Lbracket);
      setState(124);
      exp();
      setState(125);
      match(SysyParser::Rbracket);
      setState(131);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(134);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysyParser::Assign) {
      setState(132);
      match(SysyParser::Assign);
      setState(133);
      initVal();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitValContext ------------------------------------------------------------------

SysyParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::InitValContext::getRuleIndex() const {
  return SysyParser::RuleInitVal;
}

void SysyParser::InitValContext::copyFrom(InitValContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InitContext ------------------------------------------------------------------

SysyParser::ExpContext* SysyParser::InitContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::InitContext::InitContext(InitValContext *ctx) { copyFrom(ctx); }

void SysyParser::InitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit(this);
}
void SysyParser::InitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit(this);
}
//----------------- InitListContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::InitListContext::Lbrace() {
  return getToken(SysyParser::Lbrace, 0);
}

tree::TerminalNode* SysyParser::InitListContext::Rbrace() {
  return getToken(SysyParser::Rbrace, 0);
}

std::vector<SysyParser::InitValContext *> SysyParser::InitListContext::initVal() {
  return getRuleContexts<SysyParser::InitValContext>();
}

SysyParser::InitValContext* SysyParser::InitListContext::initVal(size_t i) {
  return getRuleContext<SysyParser::InitValContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::InitListContext::Comma() {
  return getTokens(SysyParser::Comma);
}

tree::TerminalNode* SysyParser::InitListContext::Comma(size_t i) {
  return getToken(SysyParser::Comma, i);
}

SysyParser::InitListContext::InitListContext(InitValContext *ctx) { copyFrom(ctx); }

void SysyParser::InitListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitList(this);
}
void SysyParser::InitListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitList(this);
}
SysyParser::InitValContext* SysyParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 16, SysyParser::RuleInitVal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(149);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::DecIntConst:
      case SysyParser::OctIntConst:
      case SysyParser::HexIntConst:
      case SysyParser::DecFloatConst:
      case SysyParser::HexFloatConst:
      case SysyParser::Add:
      case SysyParser::Sub:
      case SysyParser::Not:
      case SysyParser::Lparen:
      case SysyParser::Ident: {
        _localctx = dynamic_cast<InitValContext *>(_tracker.createInstance<SysyParser::InitContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(136);
        exp();
        break;
      }

      case SysyParser::Lbrace: {
        _localctx = dynamic_cast<InitValContext *>(_tracker.createInstance<SysyParser::InitListContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(137);
        match(SysyParser::Lbrace);
        setState(146);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << SysyParser::DecIntConst)
          | (1ULL << SysyParser::OctIntConst)
          | (1ULL << SysyParser::HexIntConst)
          | (1ULL << SysyParser::DecFloatConst)
          | (1ULL << SysyParser::HexFloatConst)
          | (1ULL << SysyParser::Add)
          | (1ULL << SysyParser::Sub)
          | (1ULL << SysyParser::Not)
          | (1ULL << SysyParser::Lparen)
          | (1ULL << SysyParser::Lbrace)
          | (1ULL << SysyParser::Ident))) != 0)) {
          setState(138);
          initVal();
          setState(143);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SysyParser::Comma) {
            setState(139);
            match(SysyParser::Comma);
            setState(140);
            initVal();
            setState(145);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(148);
        match(SysyParser::Rbrace);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

SysyParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::FuncTypeContext* SysyParser::FuncDefContext::funcType() {
  return getRuleContext<SysyParser::FuncTypeContext>(0);
}

tree::TerminalNode* SysyParser::FuncDefContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

tree::TerminalNode* SysyParser::FuncDefContext::Lparen() {
  return getToken(SysyParser::Lparen, 0);
}

tree::TerminalNode* SysyParser::FuncDefContext::Rparen() {
  return getToken(SysyParser::Rparen, 0);
}

SysyParser::BlockContext* SysyParser::FuncDefContext::block() {
  return getRuleContext<SysyParser::BlockContext>(0);
}

SysyParser::FuncFParamsContext* SysyParser::FuncDefContext::funcFParams() {
  return getRuleContext<SysyParser::FuncFParamsContext>(0);
}


size_t SysyParser::FuncDefContext::getRuleIndex() const {
  return SysyParser::RuleFuncDef;
}

void SysyParser::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}

void SysyParser::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}

SysyParser::FuncDefContext* SysyParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, SysyParser::RuleFuncDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    funcType();
    setState(152);
    match(SysyParser::Ident);
    setState(153);
    match(SysyParser::Lparen);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SysyParser::Int

    || _la == SysyParser::Float) {
      setState(154);
      funcFParams();
    }
    setState(157);
    match(SysyParser::Rparen);
    setState(158);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

SysyParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::FuncTypeContext::getRuleIndex() const {
  return SysyParser::RuleFuncType;
}

void SysyParser::FuncTypeContext::copyFrom(FuncTypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncType_Context ------------------------------------------------------------------

SysyParser::BTypeContext* SysyParser::FuncType_Context::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

SysyParser::FuncType_Context::FuncType_Context(FuncTypeContext *ctx) { copyFrom(ctx); }

void SysyParser::FuncType_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncType_(this);
}
void SysyParser::FuncType_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncType_(this);
}
//----------------- VoidContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::VoidContext::Void() {
  return getToken(SysyParser::Void, 0);
}

SysyParser::VoidContext::VoidContext(FuncTypeContext *ctx) { copyFrom(ctx); }

void SysyParser::VoidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVoid(this);
}
void SysyParser::VoidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVoid(this);
}
SysyParser::FuncTypeContext* SysyParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, SysyParser::RuleFuncType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::Int:
      case SysyParser::Float: {
        _localctx = dynamic_cast<FuncTypeContext *>(_tracker.createInstance<SysyParser::FuncType_Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(160);
        bType();
        break;
      }

      case SysyParser::Void: {
        _localctx = dynamic_cast<FuncTypeContext *>(_tracker.createInstance<SysyParser::VoidContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(161);
        match(SysyParser::Void);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

SysyParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::FuncFParamContext *> SysyParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<SysyParser::FuncFParamContext>();
}

SysyParser::FuncFParamContext* SysyParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<SysyParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::FuncFParamsContext::Comma() {
  return getTokens(SysyParser::Comma);
}

tree::TerminalNode* SysyParser::FuncFParamsContext::Comma(size_t i) {
  return getToken(SysyParser::Comma, i);
}


size_t SysyParser::FuncFParamsContext::getRuleIndex() const {
  return SysyParser::RuleFuncFParams;
}

void SysyParser::FuncFParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncFParams(this);
}

void SysyParser::FuncFParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncFParams(this);
}

SysyParser::FuncFParamsContext* SysyParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, SysyParser::RuleFuncFParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    funcFParam();
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::Comma) {
      setState(165);
      match(SysyParser::Comma);
      setState(166);
      funcFParam();
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

SysyParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::FuncFParamContext::getRuleIndex() const {
  return SysyParser::RuleFuncFParam;
}

void SysyParser::FuncFParamContext::copyFrom(FuncFParamContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ScalarParamContext ------------------------------------------------------------------

SysyParser::BTypeContext* SysyParser::ScalarParamContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

tree::TerminalNode* SysyParser::ScalarParamContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

SysyParser::ScalarParamContext::ScalarParamContext(FuncFParamContext *ctx) { copyFrom(ctx); }

void SysyParser::ScalarParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarParam(this);
}
void SysyParser::ScalarParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarParam(this);
}
//----------------- ArrayParamContext ------------------------------------------------------------------

SysyParser::BTypeContext* SysyParser::ArrayParamContext::bType() {
  return getRuleContext<SysyParser::BTypeContext>(0);
}

tree::TerminalNode* SysyParser::ArrayParamContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysyParser::ArrayParamContext::Lbracket() {
  return getTokens(SysyParser::Lbracket);
}

tree::TerminalNode* SysyParser::ArrayParamContext::Lbracket(size_t i) {
  return getToken(SysyParser::Lbracket, i);
}

std::vector<tree::TerminalNode *> SysyParser::ArrayParamContext::Rbracket() {
  return getTokens(SysyParser::Rbracket);
}

tree::TerminalNode* SysyParser::ArrayParamContext::Rbracket(size_t i) {
  return getToken(SysyParser::Rbracket, i);
}

std::vector<SysyParser::ExpContext *> SysyParser::ArrayParamContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::ArrayParamContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}

SysyParser::ArrayParamContext::ArrayParamContext(FuncFParamContext *ctx) { copyFrom(ctx); }

void SysyParser::ArrayParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayParam(this);
}
void SysyParser::ArrayParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayParam(this);
}
SysyParser::FuncFParamContext* SysyParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 24, SysyParser::RuleFuncFParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(188);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FuncFParamContext *>(_tracker.createInstance<SysyParser::ScalarParamContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(172);
      bType();
      setState(173);
      match(SysyParser::Ident);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FuncFParamContext *>(_tracker.createInstance<SysyParser::ArrayParamContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(175);
      bType();
      setState(176);
      match(SysyParser::Ident);
      setState(177);
      match(SysyParser::Lbracket);
      setState(178);
      match(SysyParser::Rbracket);
      setState(185);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SysyParser::Lbracket) {
        setState(179);
        match(SysyParser::Lbracket);
        setState(180);
        exp();
        setState(181);
        match(SysyParser::Rbracket);
        setState(187);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SysyParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::BlockContext::Lbrace() {
  return getToken(SysyParser::Lbrace, 0);
}

tree::TerminalNode* SysyParser::BlockContext::Rbrace() {
  return getToken(SysyParser::Rbrace, 0);
}

std::vector<SysyParser::BlockItemContext *> SysyParser::BlockContext::blockItem() {
  return getRuleContexts<SysyParser::BlockItemContext>();
}

SysyParser::BlockItemContext* SysyParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<SysyParser::BlockItemContext>(i);
}


size_t SysyParser::BlockContext::getRuleIndex() const {
  return SysyParser::RuleBlock;
}

void SysyParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SysyParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

SysyParser::BlockContext* SysyParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, SysyParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(SysyParser::Lbrace);
    setState(194);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SysyParser::DecIntConst)
      | (1ULL << SysyParser::OctIntConst)
      | (1ULL << SysyParser::HexIntConst)
      | (1ULL << SysyParser::DecFloatConst)
      | (1ULL << SysyParser::HexFloatConst)
      | (1ULL << SysyParser::Int)
      | (1ULL << SysyParser::Float)
      | (1ULL << SysyParser::Const)
      | (1ULL << SysyParser::If)
      | (1ULL << SysyParser::Add)
      | (1ULL << SysyParser::Sub)
      | (1ULL << SysyParser::Not)
      | (1ULL << SysyParser::Semicolon)
      | (1ULL << SysyParser::Lparen)
      | (1ULL << SysyParser::Lbrace)
      | (1ULL << SysyParser::Ident))) != 0)) {
      setState(191);
      blockItem();
      setState(196);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(197);
    match(SysyParser::Rbrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

SysyParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::DeclContext* SysyParser::BlockItemContext::decl() {
  return getRuleContext<SysyParser::DeclContext>(0);
}

SysyParser::StmtContext* SysyParser::BlockItemContext::stmt() {
  return getRuleContext<SysyParser::StmtContext>(0);
}


size_t SysyParser::BlockItemContext::getRuleIndex() const {
  return SysyParser::RuleBlockItem;
}

void SysyParser::BlockItemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockItem(this);
}

void SysyParser::BlockItemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockItem(this);
}

SysyParser::BlockItemContext* SysyParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 28, SysyParser::RuleBlockItem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(201);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::Int:
      case SysyParser::Float:
      case SysyParser::Const: {
        enterOuterAlt(_localctx, 1);
        setState(199);
        decl();
        break;
      }

      case SysyParser::DecIntConst:
      case SysyParser::OctIntConst:
      case SysyParser::HexIntConst:
      case SysyParser::DecFloatConst:
      case SysyParser::HexFloatConst:
      case SysyParser::If:
      case SysyParser::Add:
      case SysyParser::Sub:
      case SysyParser::Not:
      case SysyParser::Semicolon:
      case SysyParser::Lparen:
      case SysyParser::Lbrace:
      case SysyParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(200);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

SysyParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::StmtContext::getRuleIndex() const {
  return SysyParser::RuleStmt;
}

void SysyParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprStmtContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::ExprStmtContext::Semicolon() {
  return getToken(SysyParser::Semicolon, 0);
}

SysyParser::ExpContext* SysyParser::ExprStmtContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::ExprStmtContext::ExprStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::ExprStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprStmt(this);
}
void SysyParser::ExprStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprStmt(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

SysyParser::BlockContext* SysyParser::BlockStmtContext::block() {
  return getRuleContext<SysyParser::BlockContext>(0);
}

SysyParser::BlockStmtContext::BlockStmtContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::BlockStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStmt(this);
}
void SysyParser::BlockStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStmt(this);
}
//----------------- IfElseContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::IfElseContext::If() {
  return getToken(SysyParser::If, 0);
}

tree::TerminalNode* SysyParser::IfElseContext::Lparen() {
  return getToken(SysyParser::Lparen, 0);
}

SysyParser::CondContext* SysyParser::IfElseContext::cond() {
  return getRuleContext<SysyParser::CondContext>(0);
}

tree::TerminalNode* SysyParser::IfElseContext::Rparen() {
  return getToken(SysyParser::Rparen, 0);
}

std::vector<SysyParser::StmtContext *> SysyParser::IfElseContext::stmt() {
  return getRuleContexts<SysyParser::StmtContext>();
}

SysyParser::StmtContext* SysyParser::IfElseContext::stmt(size_t i) {
  return getRuleContext<SysyParser::StmtContext>(i);
}

tree::TerminalNode* SysyParser::IfElseContext::Else() {
  return getToken(SysyParser::Else, 0);
}

SysyParser::IfElseContext::IfElseContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::IfElseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfElse(this);
}
void SysyParser::IfElseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfElse(this);
}
//----------------- AssignContext ------------------------------------------------------------------

SysyParser::LValContext* SysyParser::AssignContext::lVal() {
  return getRuleContext<SysyParser::LValContext>(0);
}

tree::TerminalNode* SysyParser::AssignContext::Assign() {
  return getToken(SysyParser::Assign, 0);
}

SysyParser::ExpContext* SysyParser::AssignContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

tree::TerminalNode* SysyParser::AssignContext::Semicolon() {
  return getToken(SysyParser::Semicolon, 0);
}

SysyParser::AssignContext::AssignContext(StmtContext *ctx) { copyFrom(ctx); }

void SysyParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}
void SysyParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}
SysyParser::StmtContext* SysyParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SysyParser::RuleStmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(222);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::AssignContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(203);
      lVal();
      setState(204);
      match(SysyParser::Assign);
      setState(205);
      exp();
      setState(206);
      match(SysyParser::Semicolon);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::ExprStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(209);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::DecIntConst)
        | (1ULL << SysyParser::OctIntConst)
        | (1ULL << SysyParser::HexIntConst)
        | (1ULL << SysyParser::DecFloatConst)
        | (1ULL << SysyParser::HexFloatConst)
        | (1ULL << SysyParser::Add)
        | (1ULL << SysyParser::Sub)
        | (1ULL << SysyParser::Not)
        | (1ULL << SysyParser::Lparen)
        | (1ULL << SysyParser::Ident))) != 0)) {
        setState(208);
        exp();
      }
      setState(211);
      match(SysyParser::Semicolon);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::BlockStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(212);
      block();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StmtContext *>(_tracker.createInstance<SysyParser::IfElseContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(213);
      match(SysyParser::If);
      setState(214);
      match(SysyParser::Lparen);
      setState(215);
      cond();
      setState(216);
      match(SysyParser::Rparen);
      setState(217);
      stmt();
      setState(220);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(218);
        match(SysyParser::Else);
        setState(219);
        stmt();
        break;
      }

      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

SysyParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::AddExpContext* SysyParser::ExpContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}


size_t SysyParser::ExpContext::getRuleIndex() const {
  return SysyParser::RuleExp;
}

void SysyParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void SysyParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}

SysyParser::ExpContext* SysyParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 32, SysyParser::RuleExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

SysyParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::LOrExpContext* SysyParser::CondContext::lOrExp() {
  return getRuleContext<SysyParser::LOrExpContext>(0);
}


size_t SysyParser::CondContext::getRuleIndex() const {
  return SysyParser::RuleCond;
}

void SysyParser::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void SysyParser::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}

SysyParser::CondContext* SysyParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 34, SysyParser::RuleCond);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    lOrExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

SysyParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::LValContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

std::vector<tree::TerminalNode *> SysyParser::LValContext::Lbracket() {
  return getTokens(SysyParser::Lbracket);
}

tree::TerminalNode* SysyParser::LValContext::Lbracket(size_t i) {
  return getToken(SysyParser::Lbracket, i);
}

std::vector<SysyParser::ExpContext *> SysyParser::LValContext::exp() {
  return getRuleContexts<SysyParser::ExpContext>();
}

SysyParser::ExpContext* SysyParser::LValContext::exp(size_t i) {
  return getRuleContext<SysyParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::LValContext::Rbracket() {
  return getTokens(SysyParser::Rbracket);
}

tree::TerminalNode* SysyParser::LValContext::Rbracket(size_t i) {
  return getToken(SysyParser::Rbracket, i);
}


size_t SysyParser::LValContext::getRuleIndex() const {
  return SysyParser::RuleLVal;
}

void SysyParser::LValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLVal(this);
}

void SysyParser::LValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLVal(this);
}

SysyParser::LValContext* SysyParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 36, SysyParser::RuleLVal);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(SysyParser::Ident);
    setState(235);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(229);
        match(SysyParser::Lbracket);
        setState(230);
        exp();
        setState(231);
        match(SysyParser::Rbracket); 
      }
      setState(237);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

SysyParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::PrimaryExpContext::getRuleIndex() const {
  return SysyParser::RulePrimaryExp;
}

void SysyParser::PrimaryExpContext::copyFrom(PrimaryExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrimaryExp_Context ------------------------------------------------------------------

tree::TerminalNode* SysyParser::PrimaryExp_Context::Lparen() {
  return getToken(SysyParser::Lparen, 0);
}

SysyParser::ExpContext* SysyParser::PrimaryExp_Context::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

tree::TerminalNode* SysyParser::PrimaryExp_Context::Rparen() {
  return getToken(SysyParser::Rparen, 0);
}

SysyParser::NumberContext* SysyParser::PrimaryExp_Context::number() {
  return getRuleContext<SysyParser::NumberContext>(0);
}

SysyParser::PrimaryExp_Context::PrimaryExp_Context(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::PrimaryExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrimaryExp_(this);
}
void SysyParser::PrimaryExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrimaryExp_(this);
}
//----------------- LValExprContext ------------------------------------------------------------------

SysyParser::LValContext* SysyParser::LValExprContext::lVal() {
  return getRuleContext<SysyParser::LValContext>(0);
}

SysyParser::LValExprContext::LValExprContext(PrimaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LValExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLValExpr(this);
}
void SysyParser::LValExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLValExpr(this);
}
SysyParser::PrimaryExpContext* SysyParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 38, SysyParser::RulePrimaryExp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::Lparen: {
        _localctx = dynamic_cast<PrimaryExpContext *>(_tracker.createInstance<SysyParser::PrimaryExp_Context>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(238);
        match(SysyParser::Lparen);
        setState(239);
        exp();
        setState(240);
        match(SysyParser::Rparen);
        break;
      }

      case SysyParser::Ident: {
        _localctx = dynamic_cast<PrimaryExpContext *>(_tracker.createInstance<SysyParser::LValExprContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(242);
        lVal();
        break;
      }

      case SysyParser::DecIntConst:
      case SysyParser::OctIntConst:
      case SysyParser::HexIntConst:
      case SysyParser::DecFloatConst:
      case SysyParser::HexFloatConst: {
        _localctx = dynamic_cast<PrimaryExpContext *>(_tracker.createInstance<SysyParser::PrimaryExp_Context>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(243);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntConstContext ------------------------------------------------------------------

SysyParser::IntConstContext::IntConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::IntConstContext::getRuleIndex() const {
  return SysyParser::RuleIntConst;
}

void SysyParser::IntConstContext::copyFrom(IntConstContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- HexIntConstContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::HexIntConstContext::HexIntConst() {
  return getToken(SysyParser::HexIntConst, 0);
}

SysyParser::HexIntConstContext::HexIntConstContext(IntConstContext *ctx) { copyFrom(ctx); }

void SysyParser::HexIntConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexIntConst(this);
}
void SysyParser::HexIntConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexIntConst(this);
}
//----------------- DecIntConstContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::DecIntConstContext::DecIntConst() {
  return getToken(SysyParser::DecIntConst, 0);
}

SysyParser::DecIntConstContext::DecIntConstContext(IntConstContext *ctx) { copyFrom(ctx); }

void SysyParser::DecIntConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecIntConst(this);
}
void SysyParser::DecIntConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecIntConst(this);
}
//----------------- OctIntConstContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::OctIntConstContext::OctIntConst() {
  return getToken(SysyParser::OctIntConst, 0);
}

SysyParser::OctIntConstContext::OctIntConstContext(IntConstContext *ctx) { copyFrom(ctx); }

void SysyParser::OctIntConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOctIntConst(this);
}
void SysyParser::OctIntConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOctIntConst(this);
}
SysyParser::IntConstContext* SysyParser::intConst() {
  IntConstContext *_localctx = _tracker.createInstance<IntConstContext>(_ctx, getState());
  enterRule(_localctx, 40, SysyParser::RuleIntConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::DecIntConst: {
        _localctx = dynamic_cast<IntConstContext *>(_tracker.createInstance<SysyParser::DecIntConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(246);
        match(SysyParser::DecIntConst);
        break;
      }

      case SysyParser::OctIntConst: {
        _localctx = dynamic_cast<IntConstContext *>(_tracker.createInstance<SysyParser::OctIntConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(247);
        match(SysyParser::OctIntConst);
        break;
      }

      case SysyParser::HexIntConst: {
        _localctx = dynamic_cast<IntConstContext *>(_tracker.createInstance<SysyParser::HexIntConstContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(248);
        match(SysyParser::HexIntConst);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatConstContext ------------------------------------------------------------------

SysyParser::FloatConstContext::FloatConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::FloatConstContext::getRuleIndex() const {
  return SysyParser::RuleFloatConst;
}

void SysyParser::FloatConstContext::copyFrom(FloatConstContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DecFloatConstContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::DecFloatConstContext::DecFloatConst() {
  return getToken(SysyParser::DecFloatConst, 0);
}

SysyParser::DecFloatConstContext::DecFloatConstContext(FloatConstContext *ctx) { copyFrom(ctx); }

void SysyParser::DecFloatConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecFloatConst(this);
}
void SysyParser::DecFloatConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecFloatConst(this);
}
//----------------- HexFloatConstContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::HexFloatConstContext::HexFloatConst() {
  return getToken(SysyParser::HexFloatConst, 0);
}

SysyParser::HexFloatConstContext::HexFloatConstContext(FloatConstContext *ctx) { copyFrom(ctx); }

void SysyParser::HexFloatConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHexFloatConst(this);
}
void SysyParser::HexFloatConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHexFloatConst(this);
}
SysyParser::FloatConstContext* SysyParser::floatConst() {
  FloatConstContext *_localctx = _tracker.createInstance<FloatConstContext>(_ctx, getState());
  enterRule(_localctx, 42, SysyParser::RuleFloatConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(253);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::DecFloatConst: {
        _localctx = dynamic_cast<FloatConstContext *>(_tracker.createInstance<SysyParser::DecFloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(251);
        match(SysyParser::DecFloatConst);
        break;
      }

      case SysyParser::HexFloatConst: {
        _localctx = dynamic_cast<FloatConstContext *>(_tracker.createInstance<SysyParser::HexFloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(252);
        match(SysyParser::HexFloatConst);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SysyParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::IntConstContext* SysyParser::NumberContext::intConst() {
  return getRuleContext<SysyParser::IntConstContext>(0);
}

SysyParser::FloatConstContext* SysyParser::NumberContext::floatConst() {
  return getRuleContext<SysyParser::FloatConstContext>(0);
}


size_t SysyParser::NumberContext::getRuleIndex() const {
  return SysyParser::RuleNumber;
}

void SysyParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void SysyParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

SysyParser::NumberContext* SysyParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 44, SysyParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::DecIntConst:
      case SysyParser::OctIntConst:
      case SysyParser::HexIntConst: {
        enterOuterAlt(_localctx, 1);
        setState(255);
        intConst();
        break;
      }

      case SysyParser::DecFloatConst:
      case SysyParser::HexFloatConst: {
        enterOuterAlt(_localctx, 2);
        setState(256);
        floatConst();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

SysyParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::UnaryExpContext::getRuleIndex() const {
  return SysyParser::RuleUnaryExp;
}

void SysyParser::UnaryExpContext::copyFrom(UnaryExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CallContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::CallContext::Ident() {
  return getToken(SysyParser::Ident, 0);
}

tree::TerminalNode* SysyParser::CallContext::Lparen() {
  return getToken(SysyParser::Lparen, 0);
}

tree::TerminalNode* SysyParser::CallContext::Rparen() {
  return getToken(SysyParser::Rparen, 0);
}

SysyParser::FuncRParamsContext* SysyParser::CallContext::funcRParams() {
  return getRuleContext<SysyParser::FuncRParamsContext>(0);
}

SysyParser::CallContext::CallContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}
void SysyParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}
//----------------- NotContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::NotContext::Not() {
  return getToken(SysyParser::Not, 0);
}

SysyParser::UnaryExpContext* SysyParser::NotContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::NotContext::NotContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void SysyParser::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}
//----------------- UnaryExp_Context ------------------------------------------------------------------

SysyParser::PrimaryExpContext* SysyParser::UnaryExp_Context::primaryExp() {
  return getRuleContext<SysyParser::PrimaryExpContext>(0);
}

SysyParser::UnaryExp_Context::UnaryExp_Context(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::UnaryExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExp_(this);
}
void SysyParser::UnaryExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExp_(this);
}
//----------------- UnaryAddContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::UnaryAddContext::Add() {
  return getToken(SysyParser::Add, 0);
}

SysyParser::UnaryExpContext* SysyParser::UnaryAddContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::UnaryAddContext::UnaryAddContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::UnaryAddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryAdd(this);
}
void SysyParser::UnaryAddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryAdd(this);
}
//----------------- UnarySubContext ------------------------------------------------------------------

tree::TerminalNode* SysyParser::UnarySubContext::Sub() {
  return getToken(SysyParser::Sub, 0);
}

SysyParser::UnaryExpContext* SysyParser::UnarySubContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::UnarySubContext::UnarySubContext(UnaryExpContext *ctx) { copyFrom(ctx); }

void SysyParser::UnarySubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnarySub(this);
}
void SysyParser::UnarySubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnarySub(this);
}
SysyParser::UnaryExpContext* SysyParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 46, SysyParser::RuleUnaryExp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(272);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::UnaryExp_Context>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(259);
      primaryExp();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::CallContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(260);
      match(SysyParser::Ident);
      setState(261);
      match(SysyParser::Lparen);
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << SysyParser::DecIntConst)
        | (1ULL << SysyParser::OctIntConst)
        | (1ULL << SysyParser::HexIntConst)
        | (1ULL << SysyParser::DecFloatConst)
        | (1ULL << SysyParser::HexFloatConst)
        | (1ULL << SysyParser::StringConst)
        | (1ULL << SysyParser::Add)
        | (1ULL << SysyParser::Sub)
        | (1ULL << SysyParser::Not)
        | (1ULL << SysyParser::Lparen)
        | (1ULL << SysyParser::Ident))) != 0)) {
        setState(262);
        funcRParams();
      }
      setState(265);
      match(SysyParser::Rparen);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::UnaryAddContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(266);
      match(SysyParser::Add);
      setState(267);
      unaryExp();
      break;
    }

    case 4: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::UnarySubContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(268);
      match(SysyParser::Sub);
      setState(269);
      unaryExp();
      break;
    }

    case 5: {
      _localctx = dynamic_cast<UnaryExpContext *>(_tracker.createInstance<SysyParser::NotContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(270);
      match(SysyParser::Not);
      setState(271);
      unaryExp();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringConstContext ------------------------------------------------------------------

SysyParser::StringConstContext::StringConstContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SysyParser::StringConstContext::StringConst() {
  return getToken(SysyParser::StringConst, 0);
}


size_t SysyParser::StringConstContext::getRuleIndex() const {
  return SysyParser::RuleStringConst;
}

void SysyParser::StringConstContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringConst(this);
}

void SysyParser::StringConstContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringConst(this);
}

SysyParser::StringConstContext* SysyParser::stringConst() {
  StringConstContext *_localctx = _tracker.createInstance<StringConstContext>(_ctx, getState());
  enterRule(_localctx, 48, SysyParser::RuleStringConst);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(274);
    match(SysyParser::StringConst);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamContext ------------------------------------------------------------------

SysyParser::FuncRParamContext::FuncRParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SysyParser::ExpContext* SysyParser::FuncRParamContext::exp() {
  return getRuleContext<SysyParser::ExpContext>(0);
}

SysyParser::StringConstContext* SysyParser::FuncRParamContext::stringConst() {
  return getRuleContext<SysyParser::StringConstContext>(0);
}


size_t SysyParser::FuncRParamContext::getRuleIndex() const {
  return SysyParser::RuleFuncRParam;
}

void SysyParser::FuncRParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncRParam(this);
}

void SysyParser::FuncRParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncRParam(this);
}

SysyParser::FuncRParamContext* SysyParser::funcRParam() {
  FuncRParamContext *_localctx = _tracker.createInstance<FuncRParamContext>(_ctx, getState());
  enterRule(_localctx, 50, SysyParser::RuleFuncRParam);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(278);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SysyParser::DecIntConst:
      case SysyParser::OctIntConst:
      case SysyParser::HexIntConst:
      case SysyParser::DecFloatConst:
      case SysyParser::HexFloatConst:
      case SysyParser::Add:
      case SysyParser::Sub:
      case SysyParser::Not:
      case SysyParser::Lparen:
      case SysyParser::Ident: {
        enterOuterAlt(_localctx, 1);
        setState(276);
        exp();
        break;
      }

      case SysyParser::StringConst: {
        enterOuterAlt(_localctx, 2);
        setState(277);
        stringConst();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

SysyParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SysyParser::FuncRParamContext *> SysyParser::FuncRParamsContext::funcRParam() {
  return getRuleContexts<SysyParser::FuncRParamContext>();
}

SysyParser::FuncRParamContext* SysyParser::FuncRParamsContext::funcRParam(size_t i) {
  return getRuleContext<SysyParser::FuncRParamContext>(i);
}

std::vector<tree::TerminalNode *> SysyParser::FuncRParamsContext::Comma() {
  return getTokens(SysyParser::Comma);
}

tree::TerminalNode* SysyParser::FuncRParamsContext::Comma(size_t i) {
  return getToken(SysyParser::Comma, i);
}


size_t SysyParser::FuncRParamsContext::getRuleIndex() const {
  return SysyParser::RuleFuncRParams;
}

void SysyParser::FuncRParamsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncRParams(this);
}

void SysyParser::FuncRParamsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncRParams(this);
}

SysyParser::FuncRParamsContext* SysyParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 52, SysyParser::RuleFuncRParams);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(280);
    funcRParam();
    setState(285);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SysyParser::Comma) {
      setState(281);
      match(SysyParser::Comma);
      setState(282);
      funcRParam();
      setState(287);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

SysyParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::MulExpContext::getRuleIndex() const {
  return SysyParser::RuleMulExp;
}

void SysyParser::MulExpContext::copyFrom(MulExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DivContext ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::DivContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

tree::TerminalNode* SysyParser::DivContext::Div() {
  return getToken(SysyParser::Div, 0);
}

SysyParser::UnaryExpContext* SysyParser::DivContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::DivContext::DivContext(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void SysyParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}
//----------------- ModContext ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::ModContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

tree::TerminalNode* SysyParser::ModContext::Mod() {
  return getToken(SysyParser::Mod, 0);
}

SysyParser::UnaryExpContext* SysyParser::ModContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::ModContext::ModContext(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}
void SysyParser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}
//----------------- MulContext ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::MulContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

tree::TerminalNode* SysyParser::MulContext::Mul() {
  return getToken(SysyParser::Mul, 0);
}

SysyParser::UnaryExpContext* SysyParser::MulContext::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::MulContext::MulContext(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::MulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul(this);
}
void SysyParser::MulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul(this);
}
//----------------- MulExp_Context ------------------------------------------------------------------

SysyParser::UnaryExpContext* SysyParser::MulExp_Context::unaryExp() {
  return getRuleContext<SysyParser::UnaryExpContext>(0);
}

SysyParser::MulExp_Context::MulExp_Context(MulExpContext *ctx) { copyFrom(ctx); }

void SysyParser::MulExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulExp_(this);
}
void SysyParser::MulExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulExp_(this);
}

SysyParser::MulExpContext* SysyParser::mulExp() {
   return mulExp(0);
}

SysyParser::MulExpContext* SysyParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  SysyParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, SysyParser::RuleMulExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<MulExp_Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(289);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(302);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(300);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulContext>(_tracker.createInstance<MulExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMulExp);
          setState(291);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(292);
          match(SysyParser::Mul);
          setState(293);
          unaryExp();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<MulExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMulExp);
          setState(294);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(295);
          match(SysyParser::Div);
          setState(296);
          unaryExp();
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<MulExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleMulExp);
          setState(297);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(298);
          match(SysyParser::Mod);
          setState(299);
          unaryExp();
          break;
        }

        } 
      }
      setState(304);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

SysyParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::AddExpContext::getRuleIndex() const {
  return SysyParser::RuleAddExp;
}

void SysyParser::AddExpContext::copyFrom(AddExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddExp_Context ------------------------------------------------------------------

SysyParser::MulExpContext* SysyParser::AddExp_Context::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::AddExp_Context::AddExp_Context(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::AddExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExp_(this);
}
void SysyParser::AddExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExp_(this);
}
//----------------- AddContext ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::AddContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

tree::TerminalNode* SysyParser::AddContext::Add() {
  return getToken(SysyParser::Add, 0);
}

SysyParser::MulExpContext* SysyParser::AddContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::AddContext::AddContext(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void SysyParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}
//----------------- SubContext ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::SubContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

tree::TerminalNode* SysyParser::SubContext::Sub() {
  return getToken(SysyParser::Sub, 0);
}

SysyParser::MulExpContext* SysyParser::SubContext::mulExp() {
  return getRuleContext<SysyParser::MulExpContext>(0);
}

SysyParser::SubContext::SubContext(AddExpContext *ctx) { copyFrom(ctx); }

void SysyParser::SubContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSub(this);
}
void SysyParser::SubContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSub(this);
}

SysyParser::AddExpContext* SysyParser::addExp() {
   return addExp(0);
}

SysyParser::AddExpContext* SysyParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  SysyParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, SysyParser::RuleAddExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<AddExp_Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(306);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(316);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(314);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<AddExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAddExp);
          setState(308);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(309);
          match(SysyParser::Add);
          setState(310);
          mulExp(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SubContext>(_tracker.createInstance<AddExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleAddExp);
          setState(311);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(312);
          match(SysyParser::Sub);
          setState(313);
          mulExp(0);
          break;
        }

        } 
      }
      setState(318);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

SysyParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::RelExpContext::getRuleIndex() const {
  return SysyParser::RuleRelExp;
}

void SysyParser::RelExpContext::copyFrom(RelExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GeqContext ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::GeqContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

tree::TerminalNode* SysyParser::GeqContext::Geq() {
  return getToken(SysyParser::Geq, 0);
}

SysyParser::AddExpContext* SysyParser::GeqContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::GeqContext::GeqContext(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::GeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGeq(this);
}
void SysyParser::GeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGeq(this);
}
//----------------- LtContext ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::LtContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

tree::TerminalNode* SysyParser::LtContext::Lt() {
  return getToken(SysyParser::Lt, 0);
}

SysyParser::AddExpContext* SysyParser::LtContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::LtContext::LtContext(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLt(this);
}
void SysyParser::LtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLt(this);
}
//----------------- RelExp_Context ------------------------------------------------------------------

SysyParser::AddExpContext* SysyParser::RelExp_Context::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::RelExp_Context::RelExp_Context(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::RelExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelExp_(this);
}
void SysyParser::RelExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelExp_(this);
}
//----------------- LeqContext ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::LeqContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

tree::TerminalNode* SysyParser::LeqContext::Leq() {
  return getToken(SysyParser::Leq, 0);
}

SysyParser::AddExpContext* SysyParser::LeqContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::LeqContext::LeqContext(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeq(this);
}
void SysyParser::LeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeq(this);
}
//----------------- GtContext ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::GtContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

tree::TerminalNode* SysyParser::GtContext::Gt() {
  return getToken(SysyParser::Gt, 0);
}

SysyParser::AddExpContext* SysyParser::GtContext::addExp() {
  return getRuleContext<SysyParser::AddExpContext>(0);
}

SysyParser::GtContext::GtContext(RelExpContext *ctx) { copyFrom(ctx); }

void SysyParser::GtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGt(this);
}
void SysyParser::GtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGt(this);
}

SysyParser::RelExpContext* SysyParser::relExp() {
   return relExp(0);
}

SysyParser::RelExpContext* SysyParser::relExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, parentState);
  SysyParser::RelExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, SysyParser::RuleRelExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<RelExp_Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(320);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(336);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(334);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LtContext>(_tracker.createInstance<RelExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleRelExp);
          setState(322);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(323);
          match(SysyParser::Lt);
          setState(324);
          addExp(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<GtContext>(_tracker.createInstance<RelExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleRelExp);
          setState(325);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(326);
          match(SysyParser::Gt);
          setState(327);
          addExp(0);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<LeqContext>(_tracker.createInstance<RelExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleRelExp);
          setState(328);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(329);
          match(SysyParser::Leq);
          setState(330);
          addExp(0);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<GeqContext>(_tracker.createInstance<RelExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleRelExp);
          setState(331);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(332);
          match(SysyParser::Geq);
          setState(333);
          addExp(0);
          break;
        }

        } 
      }
      setState(338);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

SysyParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::EqExpContext::getRuleIndex() const {
  return SysyParser::RuleEqExp;
}

void SysyParser::EqExpContext::copyFrom(EqExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NeqContext ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::NeqContext::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

tree::TerminalNode* SysyParser::NeqContext::Neq() {
  return getToken(SysyParser::Neq, 0);
}

SysyParser::RelExpContext* SysyParser::NeqContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::NeqContext::NeqContext(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::NeqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNeq(this);
}
void SysyParser::NeqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNeq(this);
}
//----------------- EqContext ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::EqContext::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

tree::TerminalNode* SysyParser::EqContext::Eq() {
  return getToken(SysyParser::Eq, 0);
}

SysyParser::RelExpContext* SysyParser::EqContext::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::EqContext::EqContext(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::EqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEq(this);
}
void SysyParser::EqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEq(this);
}
//----------------- EqExp_Context ------------------------------------------------------------------

SysyParser::RelExpContext* SysyParser::EqExp_Context::relExp() {
  return getRuleContext<SysyParser::RelExpContext>(0);
}

SysyParser::EqExp_Context::EqExp_Context(EqExpContext *ctx) { copyFrom(ctx); }

void SysyParser::EqExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqExp_(this);
}
void SysyParser::EqExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqExp_(this);
}

SysyParser::EqExpContext* SysyParser::eqExp() {
   return eqExp(0);
}

SysyParser::EqExpContext* SysyParser::eqExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, parentState);
  SysyParser::EqExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 60;
  enterRecursionRule(_localctx, 60, SysyParser::RuleEqExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<EqExp_Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(340);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(350);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(348);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<EqContext>(_tracker.createInstance<EqExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleEqExp);
          setState(342);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(343);
          match(SysyParser::Eq);
          setState(344);
          relExp(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<NeqContext>(_tracker.createInstance<EqExpContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleEqExp);
          setState(345);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(346);
          match(SysyParser::Neq);
          setState(347);
          relExp(0);
          break;
        }

        } 
      }
      setState(352);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

SysyParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::LAndExpContext::getRuleIndex() const {
  return SysyParser::RuleLAndExp;
}

void SysyParser::LAndExpContext::copyFrom(LAndExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LAndExp_Context ------------------------------------------------------------------

SysyParser::EqExpContext* SysyParser::LAndExp_Context::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::LAndExp_Context::LAndExp_Context(LAndExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LAndExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLAndExp_(this);
}
void SysyParser::LAndExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLAndExp_(this);
}
//----------------- AndContext ------------------------------------------------------------------

SysyParser::LAndExpContext* SysyParser::AndContext::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

tree::TerminalNode* SysyParser::AndContext::And() {
  return getToken(SysyParser::And, 0);
}

SysyParser::EqExpContext* SysyParser::AndContext::eqExp() {
  return getRuleContext<SysyParser::EqExpContext>(0);
}

SysyParser::AndContext::AndContext(LAndExpContext *ctx) { copyFrom(ctx); }

void SysyParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void SysyParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

SysyParser::LAndExpContext* SysyParser::lAndExp() {
   return lAndExp(0);
}

SysyParser::LAndExpContext* SysyParser::lAndExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, parentState);
  SysyParser::LAndExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 62;
  enterRecursionRule(_localctx, 62, SysyParser::RuleLAndExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<LAndExp_Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(354);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(361);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<LAndExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLAndExp);
        setState(356);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(357);
        match(SysyParser::And);
        setState(358);
        eqExp(0); 
      }
      setState(363);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

SysyParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SysyParser::LOrExpContext::getRuleIndex() const {
  return SysyParser::RuleLOrExp;
}

void SysyParser::LOrExpContext::copyFrom(LOrExpContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrContext ------------------------------------------------------------------

SysyParser::LOrExpContext* SysyParser::OrContext::lOrExp() {
  return getRuleContext<SysyParser::LOrExpContext>(0);
}

tree::TerminalNode* SysyParser::OrContext::Or() {
  return getToken(SysyParser::Or, 0);
}

SysyParser::LAndExpContext* SysyParser::OrContext::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::OrContext::OrContext(LOrExpContext *ctx) { copyFrom(ctx); }

void SysyParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void SysyParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}
//----------------- LOrExp_Context ------------------------------------------------------------------

SysyParser::LAndExpContext* SysyParser::LOrExp_Context::lAndExp() {
  return getRuleContext<SysyParser::LAndExpContext>(0);
}

SysyParser::LOrExp_Context::LOrExp_Context(LOrExpContext *ctx) { copyFrom(ctx); }

void SysyParser::LOrExp_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLOrExp_(this);
}
void SysyParser::LOrExp_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SysyListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLOrExp_(this);
}

SysyParser::LOrExpContext* SysyParser::lOrExp() {
   return lOrExp(0);
}

SysyParser::LOrExpContext* SysyParser::lOrExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SysyParser::LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, parentState);
  SysyParser::LOrExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 64;
  enterRecursionRule(_localctx, 64, SysyParser::RuleLOrExp, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<LOrExp_Context>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(365);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(372);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<LOrExpContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleLOrExp);
        setState(367);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(368);
        match(SysyParser::Or);
        setState(369);
        lAndExp(0); 
      }
      setState(374);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool SysyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 27: return mulExpSempred(dynamic_cast<MulExpContext *>(context), predicateIndex);
    case 28: return addExpSempred(dynamic_cast<AddExpContext *>(context), predicateIndex);
    case 29: return relExpSempred(dynamic_cast<RelExpContext *>(context), predicateIndex);
    case 30: return eqExpSempred(dynamic_cast<EqExpContext *>(context), predicateIndex);
    case 31: return lAndExpSempred(dynamic_cast<LAndExpContext *>(context), predicateIndex);
    case 32: return lOrExpSempred(dynamic_cast<LOrExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SysyParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::relExpSempred(RelExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 4);
    case 6: return precpred(_ctx, 3);
    case 7: return precpred(_ctx, 2);
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::eqExpSempred(EqExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::lAndExpSempred(LAndExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SysyParser::lOrExpSempred(LOrExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SysyParser::_decisionToDFA;
atn::PredictionContextCache SysyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SysyParser::_atn;
std::vector<uint16_t> SysyParser::_serializedATN;

std::vector<std::string> SysyParser::_ruleNames = {
  "compUnit", "compUnitItem", "decl", "constDecl", "bType", "constDef", 
  "varDecl", "varDef", "initVal", "funcDef", "funcType", "funcFParams", 
  "funcFParam", "block", "blockItem", "stmt", "exp", "cond", "lVal", "primaryExp", 
  "intConst", "floatConst", "number", "unaryExp", "stringConst", "funcRParam", 
  "funcRParams", "mulExp", "addExp", "relExp", "eqExp", "lAndExp", "lOrExp"
};

std::vector<std::string> SysyParser::_literalNames = {
  "", "", "", "", "", "", "", "'int'", "'float'", "'void'", "'const'", "'if'", 
  "'else'", "'while'", "'break'", "'continue'", "'return'", "'='", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "'=='", "'!='", "'<'", "'>'", "'<='", "'>='", 
  "'!'", "'&&'", "'||'", "','", "';'", "'('", "')'", "'['", "']'", "'{'", 
  "'}'"
};

std::vector<std::string> SysyParser::_symbolicNames = {
  "", "DecIntConst", "OctIntConst", "HexIntConst", "DecFloatConst", "HexFloatConst", 
  "StringConst", "Int", "Float", "Void", "Const", "If", "Else", "While", 
  "Break", "Continue", "Return", "Assign", "Add", "Sub", "Mul", "Div", "Mod", 
  "Eq", "Neq", "Lt", "Gt", "Leq", "Geq", "Not", "And", "Or", "Comma", "Semicolon", 
  "Lparen", "Rparen", "Lbracket", "Rbracket", "Lbrace", "Rbrace", "Ident", 
  "Whitespace", "LineComment", "BlockComment"
};

dfa::Vocabulary SysyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SysyParser::_tokenNames;

SysyParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2d, 0x17a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x3, 0x2, 0x7, 0x2, 0x46, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x49, 
    0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x4f, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x53, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x5a, 0xa, 0x5, 0xc, 0x5, 0xe, 
    0x5, 0x5d, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x63, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 
    0x7, 0x6a, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x6d, 0xb, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x76, 
    0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x79, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x82, 0xa, 0x9, 
    0xc, 0x9, 0xe, 0x9, 0x85, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x89, 
    0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x90, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x93, 0xb, 0xa, 0x5, 0xa, 0x95, 
    0xa, 0xa, 0x3, 0xa, 0x5, 0xa, 0x98, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x5, 0xb, 0x9e, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0xa5, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x7, 0xd, 0xaa, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xad, 0xb, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xba, 0xa, 0xe, 0xc, 0xe, 
    0xe, 0xe, 0xbd, 0xb, 0xe, 0x5, 0xe, 0xbf, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x7, 0xf, 0xc3, 0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xc6, 0xb, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xcc, 0xa, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xd4, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xdf, 0xa, 0x11, 0x5, 
    0x11, 0xe1, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xec, 0xa, 
    0x14, 0xc, 0x14, 0xe, 0x14, 0xef, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xf7, 0xa, 0x15, 0x3, 
    0x16, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xfc, 0xa, 0x16, 0x3, 0x17, 0x3, 
    0x17, 0x5, 0x17, 0x100, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 
    0x104, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0x10a, 0xa, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x113, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x5, 0x1b, 0x119, 0xa, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x7, 0x1c, 0x11e, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0x121, 
    0xb, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x7, 0x1d, 0x12f, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x132, 0xb, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0x13d, 0xa, 0x1e, 0xc, 0x1e, 
    0xe, 0x1e, 0x140, 0xb, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x7, 0x1f, 0x151, 
    0xa, 0x1f, 0xc, 0x1f, 0xe, 0x1f, 0x154, 0xb, 0x1f, 0x3, 0x20, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x7, 0x20, 0x15f, 0xa, 0x20, 0xc, 0x20, 0xe, 0x20, 0x162, 0xb, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x7, 0x21, 0x16a, 0xa, 0x21, 0xc, 0x21, 0xe, 0x21, 0x16d, 0xb, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x7, 
    0x22, 0x175, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x178, 0xb, 0x22, 0x3, 
    0x22, 0x2, 0x8, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x23, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x2, 0x2, 0x2, 0x18b, 0x2, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x54, 0x3, 0x2, 0x2, 0x2, 0xa, 0x62, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x64, 0x3, 0x2, 0x2, 0x2, 0xe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x97, 0x3, 0x2, 0x2, 0x2, 0x14, 0x99, 
    0x3, 0x2, 0x2, 0x2, 0x16, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0x1a, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc0, 0x3, 0x2, 
    0x2, 0x2, 0x1e, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x20, 0xe0, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0xe2, 0x3, 0x2, 0x2, 0x2, 0x24, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x28, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0xfb, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xff, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x103, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x112, 0x3, 0x2, 0x2, 0x2, 0x32, 0x114, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x118, 0x3, 0x2, 0x2, 0x2, 0x36, 0x11a, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x122, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x133, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x141, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x40, 0x163, 0x3, 0x2, 0x2, 0x2, 0x42, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x44, 
    0x46, 0x5, 0x4, 0x3, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4b, 0x7, 0x2, 0x2, 0x3, 0x4b, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4f, 0x5, 0x6, 0x4, 0x2, 0x4d, 0x4f, 0x5, 0x14, 0xb, 0x2, 
    0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f, 
    0x5, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x5, 0x8, 0x5, 0x2, 0x51, 0x53, 
    0x5, 0xe, 0x8, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x7, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0xc, 
    0x2, 0x2, 0x55, 0x56, 0x5, 0xa, 0x6, 0x2, 0x56, 0x5b, 0x5, 0xc, 0x7, 
    0x2, 0x57, 0x58, 0x7, 0x22, 0x2, 0x2, 0x58, 0x5a, 0x5, 0xc, 0x7, 0x2, 
    0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x7, 
    0x23, 0x2, 0x2, 0x5f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x7, 0x9, 
    0x2, 0x2, 0x61, 0x63, 0x7, 0xa, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x6b, 0x7, 0x2a, 0x2, 0x2, 0x65, 0x66, 0x7, 0x26, 0x2, 0x2, 0x66, 
    0x67, 0x5, 0x22, 0x12, 0x2, 0x67, 0x68, 0x7, 0x27, 0x2, 0x2, 0x68, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x69, 0x65, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6f, 0x7, 0x13, 0x2, 0x2, 0x6f, 0x70, 0x5, 0x12, 0xa, 0x2, 
    0x70, 0xd, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x5, 0xa, 0x6, 0x2, 0x72, 
    0x77, 0x5, 0x10, 0x9, 0x2, 0x73, 0x74, 0x7, 0x22, 0x2, 0x2, 0x74, 0x76, 
    0x5, 0x10, 0x9, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 
    0x2, 0x2, 0x78, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x7b, 0x7, 0x23, 0x2, 0x2, 0x7b, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x83, 0x7, 0x2a, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x26, 0x2, 0x2, 0x7e, 
    0x7f, 0x5, 0x22, 0x12, 0x2, 0x7f, 0x80, 0x7, 0x27, 0x2, 0x2, 0x80, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x81, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x82, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x84, 0x88, 0x3, 0x2, 0x2, 0x2, 0x85, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0x7, 0x13, 0x2, 0x2, 0x87, 0x89, 0x5, 0x12, 0xa, 0x2, 
    0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 0x2, 0x2, 0x89, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x98, 0x5, 0x22, 0x12, 0x2, 0x8b, 0x94, 
    0x7, 0x28, 0x2, 0x2, 0x8c, 0x91, 0x5, 0x12, 0xa, 0x2, 0x8d, 0x8e, 0x7, 
    0x22, 0x2, 0x2, 0x8e, 0x90, 0x5, 0x12, 0xa, 0x2, 0x8f, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x93, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x94, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x98, 
    0x7, 0x29, 0x2, 0x2, 0x97, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x97, 0x8b, 0x3, 
    0x2, 0x2, 0x2, 0x98, 0x13, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x5, 0x16, 
    0xc, 0x2, 0x9a, 0x9b, 0x7, 0x2a, 0x2, 0x2, 0x9b, 0x9d, 0x7, 0x24, 0x2, 
    0x2, 0x9c, 0x9e, 0x5, 0x18, 0xd, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 
    0xa0, 0x7, 0x25, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1c, 0xf, 0x2, 0xa1, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa5, 0x5, 0xa, 0x6, 0x2, 0xa3, 0xa5, 0x7, 
    0xb, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xab, 0x5, 0x1a, 0xe, 
    0x2, 0xa7, 0xa8, 0x7, 0x22, 0x2, 0x2, 0xa8, 0xaa, 0x5, 0x1a, 0xe, 0x2, 
    0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xab, 
    0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x5, 
    0xa, 0x6, 0x2, 0xaf, 0xb0, 0x7, 0x2a, 0x2, 0x2, 0xb0, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xb1, 0xb2, 0x5, 0xa, 0x6, 0x2, 0xb2, 0xb3, 0x7, 0x2a, 0x2, 
    0x2, 0xb3, 0xb4, 0x7, 0x26, 0x2, 0x2, 0xb4, 0xbb, 0x7, 0x27, 0x2, 0x2, 
    0xb5, 0xb6, 0x7, 0x26, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x22, 0x12, 0x2, 0xb7, 
    0xb8, 0x7, 0x27, 0x2, 0x2, 0xb8, 0xba, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xba, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xb9, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xae, 0x3, 0x2, 0x2, 
    0x2, 0xbe, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xbf, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0xc0, 0xc4, 0x7, 0x28, 0x2, 0x2, 0xc1, 0xc3, 0x5, 0x1e, 0x10, 0x2, 0xc2, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc2, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x7, 0x29, 
    0x2, 0x2, 0xc8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcc, 0x5, 0x6, 0x4, 
    0x2, 0xca, 0xcc, 0x5, 0x20, 0x11, 0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xce, 0x5, 0x26, 0x14, 0x2, 0xce, 0xcf, 0x7, 0x13, 0x2, 0x2, 0xcf, 0xd0, 
    0x5, 0x22, 0x12, 0x2, 0xd0, 0xd1, 0x7, 0x23, 0x2, 0x2, 0xd1, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0x22, 0x12, 0x2, 0xd3, 0xd2, 0x3, 0x2, 
    0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd5, 0xe1, 0x7, 0x23, 0x2, 0x2, 0xd6, 0xe1, 0x5, 0x1c, 0xf, 0x2, 
    0xd7, 0xd8, 0x7, 0xd, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x24, 0x2, 0x2, 0xd9, 
    0xda, 0x5, 0x24, 0x13, 0x2, 0xda, 0xdb, 0x7, 0x25, 0x2, 0x2, 0xdb, 0xde, 
    0x5, 0x20, 0x11, 0x2, 0xdc, 0xdd, 0x7, 0xe, 0x2, 0x2, 0xdd, 0xdf, 0x5, 
    0x20, 0x11, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xe0, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x21, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xe3, 0x5, 0x3a, 0x1e, 0x2, 0xe3, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
    0x5, 0x42, 0x22, 0x2, 0xe5, 0x25, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xed, 0x7, 
    0x2a, 0x2, 0x2, 0xe7, 0xe8, 0x7, 0x26, 0x2, 0x2, 0xe8, 0xe9, 0x5, 0x22, 
    0x12, 0x2, 0xe9, 0xea, 0x7, 0x27, 0x2, 0x2, 0xea, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xec, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xed, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x3, 0x2, 0x2, 0x2, 0xee, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x7, 0x24, 0x2, 0x2, 0xf1, 0xf2, 0x5, 0x22, 0x12, 0x2, 0xf2, 0xf3, 0x7, 
    0x25, 0x2, 0x2, 0xf3, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf7, 0x5, 0x26, 
    0x14, 0x2, 0xf5, 0xf7, 0x5, 0x2e, 0x18, 0x2, 0xf6, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 
    0xf7, 0x29, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfc, 0x7, 0x3, 0x2, 0x2, 0xf9, 
    0xfc, 0x7, 0x4, 0x2, 0x2, 0xfa, 0xfc, 0x7, 0x5, 0x2, 0x2, 0xfb, 0xf8, 
    0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfa, 0x3, 
    0x2, 0x2, 0x2, 0xfc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xfd, 0x100, 0x7, 0x6, 
    0x2, 0x2, 0xfe, 0x100, 0x7, 0x7, 0x2, 0x2, 0xff, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xff, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x101, 0x104, 0x5, 0x2a, 0x16, 0x2, 0x102, 0x104, 0x5, 0x2c, 0x17, 0x2, 
    0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x102, 0x3, 0x2, 0x2, 0x2, 
    0x104, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x105, 0x113, 0x5, 0x28, 0x15, 0x2, 
    0x106, 0x107, 0x7, 0x2a, 0x2, 0x2, 0x107, 0x109, 0x7, 0x24, 0x2, 0x2, 
    0x108, 0x10a, 0x5, 0x36, 0x1c, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x10b, 0x113, 0x7, 0x25, 0x2, 0x2, 0x10c, 0x10d, 0x7, 0x14, 0x2, 0x2, 
    0x10d, 0x113, 0x5, 0x30, 0x19, 0x2, 0x10e, 0x10f, 0x7, 0x15, 0x2, 0x2, 
    0x10f, 0x113, 0x5, 0x30, 0x19, 0x2, 0x110, 0x111, 0x7, 0x1f, 0x2, 0x2, 
    0x111, 0x113, 0x5, 0x30, 0x19, 0x2, 0x112, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x106, 0x3, 0x2, 0x2, 0x2, 0x112, 0x10c, 0x3, 0x2, 0x2, 0x2, 
    0x112, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 
    0x113, 0x31, 0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x7, 0x8, 0x2, 0x2, 0x115, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x116, 0x119, 0x5, 0x22, 0x12, 0x2, 0x117, 
    0x119, 0x5, 0x32, 0x1a, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 
    0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x35, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11f, 
    0x5, 0x34, 0x1b, 0x2, 0x11b, 0x11c, 0x7, 0x22, 0x2, 0x2, 0x11c, 0x11e, 
    0x5, 0x34, 0x1b, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x121, 
    0x3, 0x2, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x37, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11f, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x123, 0x8, 0x1d, 0x1, 0x2, 0x123, 0x124, 0x5, 
    0x30, 0x19, 0x2, 0x124, 0x130, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 0xc, 
    0x5, 0x2, 0x2, 0x126, 0x127, 0x7, 0x16, 0x2, 0x2, 0x127, 0x12f, 0x5, 
    0x30, 0x19, 0x2, 0x128, 0x129, 0xc, 0x4, 0x2, 0x2, 0x129, 0x12a, 0x7, 
    0x17, 0x2, 0x2, 0x12a, 0x12f, 0x5, 0x30, 0x19, 0x2, 0x12b, 0x12c, 0xc, 
    0x3, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x18, 0x2, 0x2, 0x12d, 0x12f, 0x5, 
    0x30, 0x19, 0x2, 0x12e, 0x125, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x39, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x134, 0x8, 0x1e, 0x1, 0x2, 0x134, 0x135, 0x5, 0x38, 
    0x1d, 0x2, 0x135, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0xc, 0x4, 
    0x2, 0x2, 0x137, 0x138, 0x7, 0x14, 0x2, 0x2, 0x138, 0x13d, 0x5, 0x38, 
    0x1d, 0x2, 0x139, 0x13a, 0xc, 0x3, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x15, 
    0x2, 0x2, 0x13b, 0x13d, 0x5, 0x38, 0x1d, 0x2, 0x13c, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x13c, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x140, 0x13e, 0x3, 0x2, 0x2, 
    0x2, 0x141, 0x142, 0x8, 0x1f, 0x1, 0x2, 0x142, 0x143, 0x5, 0x3a, 0x1e, 
    0x2, 0x143, 0x152, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0xc, 0x6, 0x2, 
    0x2, 0x145, 0x146, 0x7, 0x1b, 0x2, 0x2, 0x146, 0x151, 0x5, 0x3a, 0x1e, 
    0x2, 0x147, 0x148, 0xc, 0x5, 0x2, 0x2, 0x148, 0x149, 0x7, 0x1c, 0x2, 
    0x2, 0x149, 0x151, 0x5, 0x3a, 0x1e, 0x2, 0x14a, 0x14b, 0xc, 0x4, 0x2, 
    0x2, 0x14b, 0x14c, 0x7, 0x1d, 0x2, 0x2, 0x14c, 0x151, 0x5, 0x3a, 0x1e, 
    0x2, 0x14d, 0x14e, 0xc, 0x3, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x1e, 0x2, 
    0x2, 0x14f, 0x151, 0x5, 0x3a, 0x1e, 0x2, 0x150, 0x144, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x147, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x151, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x152, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x3, 0x2, 0x2, 
    0x2, 0x153, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 0x2, 0x2, 
    0x155, 0x156, 0x8, 0x20, 0x1, 0x2, 0x156, 0x157, 0x5, 0x3c, 0x1f, 0x2, 
    0x157, 0x160, 0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0xc, 0x4, 0x2, 0x2, 
    0x159, 0x15a, 0x7, 0x19, 0x2, 0x2, 0x15a, 0x15f, 0x5, 0x3c, 0x1f, 0x2, 
    0x15b, 0x15c, 0xc, 0x3, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x1a, 0x2, 0x2, 
    0x15d, 0x15f, 0x5, 0x3c, 0x1f, 0x2, 0x15e, 0x158, 0x3, 0x2, 0x2, 0x2, 
    0x15e, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15f, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x160, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 0x163, 
    0x164, 0x8, 0x21, 0x1, 0x2, 0x164, 0x165, 0x5, 0x3e, 0x20, 0x2, 0x165, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0xc, 0x3, 0x2, 0x2, 0x167, 
    0x168, 0x7, 0x20, 0x2, 0x2, 0x168, 0x16a, 0x5, 0x3e, 0x20, 0x2, 0x169, 
    0x166, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 
    0x8, 0x22, 0x1, 0x2, 0x16f, 0x170, 0x5, 0x40, 0x21, 0x2, 0x170, 0x176, 
    0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0xc, 0x3, 0x2, 0x2, 0x172, 0x173, 
    0x7, 0x21, 0x2, 0x2, 0x173, 0x175, 0x5, 0x40, 0x21, 0x2, 0x174, 0x171, 
    0x3, 0x2, 0x2, 0x2, 0x175, 0x178, 0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x43, 0x3, 
    0x2, 0x2, 0x2, 0x178, 0x176, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x47, 0x4e, 0x52, 
    0x5b, 0x62, 0x6b, 0x77, 0x83, 0x88, 0x91, 0x94, 0x97, 0x9d, 0xa4, 0xab, 
    0xbb, 0xbe, 0xc4, 0xcb, 0xd3, 0xde, 0xe0, 0xed, 0xf6, 0xfb, 0xff, 0x103, 
    0x109, 0x112, 0x118, 0x11f, 0x12e, 0x130, 0x13c, 0x13e, 0x150, 0x152, 
    0x15e, 0x160, 0x16b, 0x176, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SysyParser::Initializer SysyParser::_init;
