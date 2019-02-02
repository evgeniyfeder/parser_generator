grammar GrammaticScheme;
@header {
#include <string>
#include "../parser_generator/grammatic.h"
}

grammatic returns [grammatic_t g]:
    (header {$g.set_header($header.header_text);})?
    st=start {$g.set_start($st.start_token);}
    (lexem {$g.add_term($lexem.term, $lexem.ignore);}
    | rules {$g.add_non_term(std::move($rules.nterm));})+;

start returns [std::string start_token]: START NTERM SCOLON {$start_token = $NTERM.text;};

header returns [std::string header_text]: HEADER CODE SCOLON {$header_text = $CODE.text.substr(1, $CODE.text.size() - 2);};

lexem returns [term_t term, bool ignore]: {$ignore = false;} TERM COLON STRING (IGNORE {$ignore = true;})? SCOLON {$term = term_t($TERM.text, $STRING.text.substr(1, $STRING.text.size() - 2));};

rules returns [non_term_t nterm]: NTERM {$nterm = non_term_t($NTERM.text); }
    (ATTR {$nterm.args = $ATTR.text.substr(1, $ATTR.text.size() - 2);})?
    (RETURS ATTR {$nterm.returns = $ATTR.text.substr(1, $ATTR.text.size() - 2);})?
    COLON
        (one_rule {$nterm.add_rule(std::move($one_rule.rule));}
        (STICK one_rule {$nterm.add_rule(std::move($one_rule.rule));})*
    ) SCOLON;

one_rule returns [rule_t rule] :
    (TERM {$rule.emplace_back($TERM.text);}
             | NTERM {$rule.emplace_back($NTERM.text);} (ATTR {$rule.back().code = $ATTR.text.substr(1, $ATTR.text.size() - 2);} )?)
    (TERM {$rule.emplace_back($TERM.text);}
        | NTERM {$rule.emplace_back($NTERM.text);} (ATTR {$rule.back().code = $ATTR.text.substr(1, $ATTR.text.size() - 2);} )?
        | CODE {$rule.emplace_back("@code", $CODE.text.substr(1, $CODE.text.size() - 2));})*
    | EPS {$rule.emplace_back("@eps");}
      (CODE {$rule.emplace_back("@code", $CODE.text.substr(1, $CODE.text.size() - 2));})*;

HEADER : 'header';
IGNORE : 'ignore';
RETURS : 'returns';
START : 'start';
EPS : 'EPS';

TERM : [A-Z][A-Z_]*;
NTERM : [a-z][a-z_]*;
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