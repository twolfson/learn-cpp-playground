namespace playground {
  class Node {
    public:
      int value;
      Node* next;

      Node();
      Node(int _value);
      Node set_next(Node& node);
      // TODO: Build out teardown and other constructors for practice
  };

  Node::Node() {
    this->value = 0;
    this->next = nullptr;
  };
  Node::Node(int _value) {
    this->value = _value;
    this->next = nullptr;
  };

  Node Node::set_next(Node& node) {
    this->next = &node;
    return node;
  }
}
