#ifndef __TREE_H_
#define __TREE_H_
#include <memory>
#include <vector>

struct node_t;
using node_ptr = std::shared_ptr<node_t>;

struct node_t {
    std::string name;
    std::vector<node_ptr> childs;

    node_t(std::string const & name);
    void add_child(node_ptr const & child);
    void add_child(node_ptr && child);
};


struct nothing_t {};

template <typename T>
struct result_t {
    node_ptr node;
    T out;
};
#endif // __TREE_H_
