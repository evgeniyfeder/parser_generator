#include "tree.h"

node_t::node_t(const std::string & name) : name(name) {}

void node_t::add_child(const node_ptr & child) {
   childs.push_back(child);
}

void node_t::add_child(node_ptr && child) {
   childs.emplace_back(std::move(child));
}

