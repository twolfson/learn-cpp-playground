#ifndef __PLAYGROUND__
#define __PLAYGROUND__

namespace playground {
  class Node {
    public:
      int value;
      Node* next;

      Node(int _value);
      Node* set_next(Node* node_ptr);
      // TODO: Build out teardown and other constructors for practice
  };
};
#endif // __PLAYGROUND__
