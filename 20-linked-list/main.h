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
};

#endif // __PLAYGROUND__
