#include "types.h"

term_t::term_t(std::string const & name, std::string const & regexp) : base_t(name), regexp(regexp) {}

term_t::type_e term_t::get_type() const { return type_e::TERM; }
