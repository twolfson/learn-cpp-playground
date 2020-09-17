// Load in our headers
#include "./main.hpp"

// Define our class and its implementation
namespace playground {
  template <class T>
  Node<T>::Node(T _value) {
    this->value = _value;
    this->next = nullptr;
  };

  template <class T>
  Node<T>::~Node() {
    this->value = 0;
    this->next = nullptr;
  }


  template <class T>
  Node* Node<T>::set_next(Node* node_ptr) {
    this->next = node_ptr;
    return node_ptr;
  }
}
