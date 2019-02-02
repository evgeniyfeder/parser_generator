#ifndef __TYPES_H_
#define __TYPES_H_

#include <string>
#include <memory>
#include <vector>

struct base_t {
   std::string name;

   base_t() = default;
   virtual ~base_t() = default;

   base_t(std::string const & name);
   enum type_e {BASE, TERM, NTERM};
   virtual type_e get_type() const;
};

struct term_t : public base_t {
   std::string regexp;

   term_t() = default;
   term_t(std::string const & name, std::string const & regexp);
   type_e get_type() const;
};

struct right_part_t {
   std::string name;
   std::string code; // if code - code, if term - "", if nonterm - args

   right_part_t(std::string const & name, std::string const & code = "");
};

using rule_t = std::vector<right_part_t>;
struct non_term_t : public base_t {
   std::vector<rule_t> rules;
   std::string args, returns = "nothing_t";

   non_term_t() = default;
   non_term_t(std::string const & name);
   void add_rule(rule_t const & rule);
   void add_rule(rule_t && rule);

   type_e get_type() const;
};

using base_ptr = std::shared_ptr<base_t>;
using term_ptr = std::shared_ptr<term_t>;
using non_term_ptr = std::shared_ptr<non_term_t>;
#endif // __TYPES_H_
