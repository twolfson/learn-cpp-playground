// Load in our headers
#include "./main.hpp"

// Define our class and its implementation
namespace playground {
  Node::Node(int _value) {
    this->value = _value;
    this->next = nullptr;
  };

  Node::~Node() {
    this->value = 0;
    this->next = nullptr;
  }

  Node* Node::set_next(Node* node_ptr) {
    this->next = node_ptr;
    return node_ptr;
  }
}
