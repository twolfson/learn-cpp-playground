// Load in our dependencies
#include <igloo/igloo.h>
using namespace igloo;

// Define our tests
Describe("A linked list node with 1 element") {
  Node head_node;
  void SetUp() {
    head_node = Node {100};
  }

  It("can retrieve its value") {
    Assert::That(head_node.value(), Equals(100));
  }

  It("has no next node") {
    Assert::That(head_node.next(), Equals(NULL));
  }
}

Describe("A linked list node with 2 elements") {
  Node head_node;
  Node tail_node;
  void SetUp() {
    head_node = Node {100};
    tail_node = Node {200};
    head_node.set_next(tail_node);
  }

  It("allows retrieving tail node from head node") {
    Assert::That(head_node.next(), Equals(tail_node));
  }

  // DEV: We could build out functionality like an iterator across all linked list nodes
  //   e.g. with an actual LinkedList class but this is prob a good enough start, right?
}

// Run our tests when being run directly
int main(int argc, /* const */ char *argv[]) {
  return TestRunner::RunAllTests(argc, argv);
}
