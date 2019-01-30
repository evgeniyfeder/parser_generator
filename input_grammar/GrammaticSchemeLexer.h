
// Generated from /home/efeder/work/itmo/mt/lab4/antlr/GrammaticScheme.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  GrammaticSchemeLexer : public antlr4::Lexer {
public:
  enum {
    HEADER = 1, IGNORE = 2, RETURS = 3, START = 4, TERM = 5, NTERM = 6, 
    WHITESPACE = 7, CODE = 8, STRING = 9, ATTR = 10, COMMA = 11, COLON = 12, 
    DCOLON = 13, SCOLON = 14, EQ = 15, STICK = 16, LB = 17, RB = 18, LP = 19, 
    RP = 20, LSQUARE = 21, RSQUARE = 22
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

