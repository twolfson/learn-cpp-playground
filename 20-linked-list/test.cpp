// Load in our dependencies
#include <igloo/igloo_alt.h> // Provide `Describe` and `It`
#include "./main.cpp"
using igloo::Assert;
using igloo::Equals;
using playground::Node;

// Define our tests
Describe(A_linked_list_node_with_1_element) {
  Node head_node;
  void SetUp() {
    head_node = Node {100};
  }

  It(can_retrieve_its_value) {
    Assert::That(head_node.value, Equals(100));
  };

  It(has_no_next_node) {
    Assert::That(head_node.next, Equals(nullptr));
  };
};

Describe(A_linked_list_node_with_2_elements) {
  Node head_node;
  Node tail_node;
  void SetUp() {
    head_node = Node {100};
    tail_node = Node {200};
    head_node.set_next(tail_node);
  }

  It(allows_retrieving_tail_node_from_head_node) {
    Assert::That(head_node.next, Equals(&tail_node));
  };

  // DEV: We could build out functionality like an iterator across all linked list nodes
  //   e.g. with an actual LinkedList class but this is prob a good enough start, right?
};

// Run our tests when being run directly
int main(int argc, /* const */ char *argv[]) {
  return igloo::TestRunner::RunAllTests(argc, argv);
}