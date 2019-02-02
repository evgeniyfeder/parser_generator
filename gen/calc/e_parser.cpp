#include <stdexcept>
#include "e_parser.h"
void e_parser::update_input(std::string const & str) { lexer.update_input(str + '$'); }
result_t<int> e_parser::parse() {
   auto res = e();
   if (lexer.get_cur_token() != END) {
      throw std::runtime_error("Unexpected end of input");
   }
   return res;
}

result_t<int> e_parser::f() {
   Token curToken = lexer.get_cur_token();
   result_t<int>  res;
   int $out;
   res.node = node_ptr(new node_t("f"));

   switch (curToken) {
   // first
   case LP:
   {
      result_t<std::string> $LP;
      $LP.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $LP.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($LP.node);
      auto $e= e();
      res.node->add_child($e.node);
      result_t<std::string> $RP;
      $RP.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $RP.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($RP.node);
      $out = $e.out;
      break;
   }
   case NUMBER:
   {
      result_t<std::string> $NUMBER;
      $NUMBER.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $NUMBER.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($NUMBER.node);
      $out = std::stoi($NUMBER.out);
      break;
   }
   default:
      throw std::runtime_error(std::string("Unexpected token '") + lexer.get_cur_token_string() + " at position " + std::to_string(lexer.get_cur_pos()));
   }
   res.out = $out;
   return res;
}

result_t<int> e_parser::ts(int acc) {
   Token curToken = lexer.get_cur_token();
   result_t<int>  res;
   int $out;
   res.node = node_ptr(new node_t("ts"));

   switch (curToken) {
   // first
   case MUL:
   {
      result_t<std::string> $MUL;
      $MUL.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $MUL.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($MUL.node);
      auto $f= f();
      res.node->add_child($f.node);
      auto $ts= ts(acc * $f.out);
      res.node->add_child($ts.node);
      $out = $ts.out;
      break;
   }
   case DIV:
   {
      result_t<std::string> $DIV;
      $DIV.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $DIV.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($DIV.node);
      auto $f= f();
      res.node->add_child($f.node);
      auto $ts= ts(acc / $f.out);
      res.node->add_child($ts.node);
      $out = $ts.out;
      break;
   }
   case RP:
   case PLUS:
   case MINUS:
   case END:
   {
      res.node->add_child(node_ptr(new node_t("@eps")));
       $out = acc; 
      break;
   }
   default:
      throw std::runtime_error(std::string("Unexpected token '") + lexer.get_cur_token_string() + " at position " + std::to_string(lexer.get_cur_pos()));
   }
   res.out = $out;
   return res;
}

result_t<int> e_parser::t() {
   Token curToken = lexer.get_cur_token();
   result_t<int>  res;
   int $out;
   res.node = node_ptr(new node_t("t"));

   switch (curToken) {
   // first
   case NUMBER:
   {
      auto $f= f();
      res.node->add_child($f.node);
      auto $ts= ts($f.out);
      res.node->add_child($ts.node);
      $out = $ts.out;
      break;
   }
   case LP:
   {
      auto $f= f();
      res.node->add_child($f.node);
      auto $ts= ts($f.out);
      res.node->add_child($ts.node);
      $out = $ts.out;
      break;
   }
   default:
      throw std::runtime_error(std::string("Unexpected token '") + lexer.get_cur_token_string() + " at position " + std::to_string(lexer.get_cur_pos()));
   }
   res.out = $out;
   return res;
}

result_t<int> e_parser::e() {
   Token curToken = lexer.get_cur_token();
   result_t<int>  res;
   int $out;
   res.node = node_ptr(new node_t("e"));

   switch (curToken) {
   // first
   case LP:
   {
      auto $t= t();
      res.node->add_child($t.node);
      auto $es= es($t.out);
      res.node->add_child($es.node);
       $out = $es.out; 
      break;
   }
   case NUMBER:
   {
      auto $t= t();
      res.node->add_child($t.node);
      auto $es= es($t.out);
      res.node->add_child($es.node);
       $out = $es.out; 
      break;
   }
   default:
      throw std::runtime_error(std::string("Unexpected token '") + lexer.get_cur_token_string() + " at position " + std::to_string(lexer.get_cur_pos()));
   }
   res.out = $out;
   return res;
}

result_t<int> e_parser::es(int acc) {
   Token curToken = lexer.get_cur_token();
   result_t<int>  res;
   int $out;
   res.node = node_ptr(new node_t("es"));

   switch (curToken) {
   // first
   case PLUS:
   {
      result_t<std::string> $PLUS;
      $PLUS.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $PLUS.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($PLUS.node);
      auto $t= t();
      res.node->add_child($t.node);
      auto $es= es(acc + $t.out);
      res.node->add_child($es.node);
      $out = $es.out;
      break;
   }
   case MINUS:
   {
      result_t<std::string> $MINUS;
      $MINUS.node = node_ptr(new node_t(lexer.get_cur_token_string()));
      $MINUS.out = lexer.get_cur_token_string();
      lexer.next_token();
      res.node->add_child($MINUS.node);
      auto $t= t();
      res.node->add_child($t.node);
      auto $es= es(acc - $t.out);
      res.node->add_child($es.node);
      $out = $es.out;
      break;
   }
   case END:
   case RP:
   {
      res.node->add_child(node_ptr(new node_t("@eps")));
       $out = acc; 
      break;
   }
   default:
      throw std::runtime_error(std::string("Unexpected token '") + lexer.get_cur_token_string() + " at position " + std::to_string(lexer.get_cur_pos()));
   }
   res.out = $out;
   return res;
}

