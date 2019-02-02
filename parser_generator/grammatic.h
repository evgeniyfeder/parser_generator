#ifndef __GRAMMATIC_H_
#define __GRAMMATIC_H_

#include <unordered_map>
#include <unordered_set>
#include <filesystem>
#include "types.h"

class grammatic_t {
public:
   grammatic_t() = default;
   grammatic_t(std::string const & start);

   grammatic_t & add_term(term_t const & term, bool skip = false);
   grammatic_t & add_non_term(non_term_t && non_term);
   grammatic_t & set_header(std::string const & header);
   grammatic_t & set_start(std::string const & start);

   void finish();
private:

   void count_first();
   void count_follow();

   void generate_parser(std::filesystem::path const & directory);
   void generate_lexer(std::filesystem::path const & directory);

   std::unordered_set<std::string> get_first_terms(rule_t const &rule, size_t index);
   int32_t find_rule(const std::string & first_name, non_term_ptr const & nterm);
   void print_rule(const rule_t & rule, std::ofstream & cpp_file);
private:
   std::string start;
   std::string header;

   std::unordered_map<std::string, non_term_ptr> non_terms;
   std::unordered_map<std::string, term_ptr> terms;
   std::unordered_set<std::string> skips;

   std::unordered_map<std::string, std::unordered_set<std::string>> first;
   std::unordered_map<std::string, std::unordered_set<std::string>> follow;
};
#endif // __GRAMMATIC_H_
