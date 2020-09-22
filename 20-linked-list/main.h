#ifndef __PLAYGROUND__
#define __PLAYGROUND__

namespace playground {
  template <typename T>
  class Node {
    public:
      T value;
      Node* next;

      // Provide options for all constructors/assignment
      Node() = delete;
      Node(T _value);
      ~Node();
      Node& operator= (const Node&) = delete;
      Node(Node&&) = delete;
      Node& operator= (const Node&&) = delete;

      // Provide our normal methods
      Node* set_next(Node* node_ptr);
  };

  // DEV: Co-locate implementation due to templating and file linking
  //   https://bytefreaks.net/programming-2/c/c-undefined-reference-to-templated-class-function
  //   We cannot use "Solution 1" (i.e. `template class`) due to our custom types
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
};

#endif // __PLAYGROUND__
