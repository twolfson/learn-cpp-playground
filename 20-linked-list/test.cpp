// Load in our dependencies
#include <igloo/igloo.h>

// Intended syntax to leverage for testing
// TODO: Need to find a test suite to use
int main() {
  // A linked list node with 1 element
  Node head_node {100};
    // can retrieve its value
    assert head_node.value() == 100;

    // has no next node
    assert head_node.next() == NULL;

  // A linked list node with 2 elements
  Node head_node {100};
  Node tail_node {200};
  head_node.set_next(tail_node);

    // We can retrieve tail node from head node
    assert head_node.next() == tail_node;

  // DEV: We could build out functionality like an iterator across all linked list nodes
  //   e.g. with an actual LinkedList class but this is prob a good enough start, right?
}
