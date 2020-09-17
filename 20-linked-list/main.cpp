namespace playground {
  class Node {
    public:
      int value;
      Node* next;

      Node(int _value);
      Node* set_next(Node* node_ptr);
      // TODO: Build out teardown and other constructors for practice
  };

  // Define our constructor and methods
  Node::Node(int _value) {
    this->value = _value;
    this->next = nullptr;
  };

  Node* Node::set_next(Node* node_ptr) {
    this->next = node_ptr;
    return node_ptr;
  }
}
