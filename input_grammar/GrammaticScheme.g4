grammar GrammaticScheme;

grammatic : header? start (lexem | ignore | rules)*;

start : START NTERM SCOLON;
header : HEADER CODE SCOLON;
lexem : TERM COLON STRING SCOLON;
ignore : IGNORE TERM SCOLON;
rules : NTERM ATTR? (RETURS ATTR)? COLON ((TERM | NTERM ATTR?  | CODE)+ (STICK (TERM | NTERM ATTR? | CODE)+)*) SCOLON;

HEADER : 'header';
IGNORE : 'ignore';
RETURS : 'returns';
START : 'start';

TERM : [A-Z][A-Z_]+;
NTERM : [a-z][a-z_]+;
WHITESPACE : [ \t\r\n]+ -> skip;

CODE : LB .*? RB;
STRING : ('"' .*? '"' | '\'' .*? '\'');
ATTR : LSQUARE .*? RSQUARE;

COMMA  : ',';
COLON  : ':';
DCOLON : '::';
SCOLON : ';';
EQ     : '=';
STICK  : '|';

LB      : '{';
RB      : '}';
LP      : '(';
RP      : ')';
LSQUARE : '[';
RSQUARE : ']';