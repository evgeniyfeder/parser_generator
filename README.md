# parser_generator
C++ parser and lexer code generator for LL(1) grammatics using ANTLR4 for C++.
This realization needs ANTLR4 runtime library. It includes here, but you can find [tutorial for installation](https://github.com/antlr/antlr4/tree/master/runtime/Cpp).
For linux in last command set DESTDIR to temporary path and copy dircetories inlude and lib from them.

# Restriction:
* only one return value(if you wanna >1 - use tuple). Specify only type. Name of value will $out.
* arguments separate by comma
* first token for non terminal can't be code
* only one term or non_term with same name per rule
* Text of terms - $NONTERN.out
