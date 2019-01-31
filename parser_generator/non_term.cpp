#include "types.h"

right_part_t::right_part_t(std::string const & name, std::string const & code) : name(name), code(code) {}

non_term_t::non_term_t(std::string const & name) : base_t(name) {}

void non_term_t::add_rule(const rule_t & rule) {
   rules.push_back(rule);
}

void non_term_t::add_rule(rule_t && rule) {
   rules.emplace_back(std::move(rule));
}

base_t::type_e non_term_t::get_type() const {
   return NTERM;
}
