// Load in our headers
#include "./main.h"

// Define our class and its implementation
namespace playground {
  template <typename T>
  Node<T>::Node(T _value) {
    this->value = _value;
    this->next = nullptr;
  }

  template <typename T>
  Node<T>::~Node() {
    this->value = 0;
    this->next = nullptr;
  }

  template <typename T>
  Node<T>* Node<T>::set_next(Node* node_ptr) {
    this->next = node_ptr;
    return node_ptr;
  }

  // Initialize would-be needed variations
  template class Node<int>;
}
