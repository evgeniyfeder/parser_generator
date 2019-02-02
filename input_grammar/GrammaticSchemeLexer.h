
#include <string>
#include "../parser_generator/grammatic.h"


// Generated from /home/efeder/work/itmo/mt/lab4/input_grammar/GrammaticScheme.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  GrammaticSchemeLexer : public antlr4::Lexer {
public:
  enum {
    HEADER = 1, IGNORE = 2, RETURS = 3, START = 4, EPS = 5, TERM = 6, NTERM = 7, 
    WHITESPACE = 8, CODE = 9, STRING = 10, ATTR = 11, COMMA = 12, COLON = 13, 
    DCOLON = 14, SCOLON = 15, EQ = 16, STICK = 17, LB = 18, RB = 19, LP = 20, 
    RP = 21, LSQUARE = 22, RSQUARE = 23
  };

  GrammaticSchemeLexer(antlr4::CharStream *input);
  ~GrammaticSchemeLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

