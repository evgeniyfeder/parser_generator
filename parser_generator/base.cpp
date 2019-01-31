#include "types.h"

base_t::base_t(std::string const & name) : name(name) {}

base_t::type_e base_t::get_type() const { return BASE; }
