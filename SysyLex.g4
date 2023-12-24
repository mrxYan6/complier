lexer grammar SysyLex;

// keyword
INT : 'int';
FLOAT : 'float';
VOID : 'void';
CONST : 'const';
RETURN : 'return';
IF : 'if';
ELSE : 'else';
WHILE : 'while';
BREAK : 'break';
CONTINUE : 'continue'; 

// delimeter
LP : '(' ;
RP : ')' ;
LB : '[' ;
RB : ']' ;
LC : '{' ;
RC : '}' ;
COMMA : ',' ;
SEMICOLON : ';';
QUESTION : '?';
COLON : ':';

// operator
MINUS : '-';
NOT : '!';
ASSIGN : '=';
ADD : '+';
MUL : '*';
DIV : '/';
MOD : '%';
AND : '&&';
OR : '||';
EQ : '==';
NEQ : '!=';
LT : '<';
LE : '<=';
GT : '>';
GE : '>=';



fragment HexPrefix
    : '0x'
    | '0X'
    ;
fragment OctPrefix : '0';

fragment NonzeroDigit : [1-9];
fragment Digit : [0-9];
fragment HexDigit : [0-9a-fA-F];
fragment OctDegit : [0-7];

// integer literal
DecIntConst : NonzeroDigit Digit*;
OctIntConst : OctPrefix OctDegit*;
HexIntConst : HexPrefix HexDigit+;

fragment  INT_CONST : DecIntConst | OctIntConst | HexIntConst;

fragment Dot : '.';

fragment Sign : '+' | '-' ;

fragment Exponent : 'e' | 'E' ;
fragment Endfloat : 'f' | 'F' ;
fragment HexExponent : 'p' | 'P' ;

fragment DecFloatFrac : Digit* Dot Digit+ | Digit+ Dot   ;
fragment HexFloatFrac : HexDigit* Dot HexDigit+ | HexDigit+ Dot ;

fragment DecFloatExp : Exponent Sign? Digit+;
fragment BinFloatExp : HexExponent Sign? Digit+;

// float literal
DecFloatConst : DecFloatFrac DecFloatExp? Endfloat? | Digit+ DecFloatExp Endfloat? ;
HexFloatConst : HexPrefix HexFloatFrac BinFloatExp Endfloat? | HexPrefix HexDigit+ BinFloatExp Endfloat?;

// identifier
ID : [A-Za-z_][_0-9A-Za-z]*;

// string
STRING : '"'(ESC|.)*?'"';

// for string
fragment
ESC : '\\"'|'\\\\';

// whitespace
WS : 
    [ \t\r\n] -> skip
    ;

// comments
LINE_COMMENT : '//' .*? '\r'? '\n' -> skip;
BLOCK_COMMENT : '/*'.*?'*/'-> skip ;
ERR : [0-9]+ [a-zA-Z_]+ [0-9a-zA-Z_]* | '0'[0-7]* [8-9]+ [0-7]* ;
