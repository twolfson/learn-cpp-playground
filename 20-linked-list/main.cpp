namespace playground {
  class Node {
    public:
      int value;
      Node* next;

      Node();
      Node(int _value);
      void _init(int _value);
      Node set_next(Node& node);
      // TODO: Build out teardown and other constructors for practice
  };

  // Define our constructor and methods
  // DEV: We alias `Node::Node()` (required for declaration -- though looking into alternatives)
  //   https://stackoverflow.com/a/308318
  Node::Node() {
    this->_init(0);
  }
  Node::Node(int _value) {
    this->_init(_value);
  };
  void Node::_init(int _value) {
    this->value = _value;
    this->next = nullptr;
  };

  Node Node::set_next(Node& node) {
    this->next = &node;
    return node;
  }
}
