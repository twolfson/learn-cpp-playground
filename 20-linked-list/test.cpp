// Load in our dependencies
#include <igloo/igloo_alt.h> // Provide `Describe` and `It`
#include "./main.cpp"
#include "./test-files/square.cpp"
using igloo::Assert;
using igloo::Equals;
using playground::Node;

// Define our tests
Describe(A_linked_list_node_with_1_element) {
  Node<int>* head_node_ptr;
  void SetUp() {
    head_node_ptr = new Node<int> {100};
  }
  void TearDown() {
    delete head_node_ptr;
  }

  It(can_retrieve_its_value) {
    Assert::That(head_node_ptr->value, Equals(100));
  };

  It(has_no_next_node) {
    Assert::That(head_node_ptr->next, Equals(nullptr));
  };
};

Describe(A_linked_list_node_with_2_elements) {
  Node<int>* head_node_ptr;
  Node<int>* tail_node_ptr;
  void SetUp() {
    head_node_ptr = new Node<int> {100};
    tail_node_ptr = new Node<int> {200};
    head_node_ptr->set_next(tail_node_ptr);
  }
  void TearDown() {
    delete head_node_ptr;
    delete tail_node_ptr;
  }

  It(allows_retrieving_tail_node_from_head_node) {
    Assert::That(head_node_ptr->next, Equals(tail_node_ptr));
  };

  // DEV: We could build out functionality like an iterator across all linked list nodes
  //   e.g. with an actual LinkedList class but this is prob a good enough start, right?
};

// DEV: This is more a demonstration for ourselves about multiple files loading
Describe(A_linked_list_node_with_a_custom_element) {
  Node<Square*>* head_node_ptr;
  Square* square_ptr;
  void SetUp() {
    square_ptr = new Square {4};
    head_node_ptr = new Node<Square*> {square_ptr};
  }
  void TearDown() {
    delete head_node_ptr;
    delete square_ptr;
  }

  It(has_no_issue_with_a_custom_type) {
    Assert::That(head_node_ptr->value, Equals(square_ptr));
  };
};

// Run our tests when being run directly
int main(int argc, /* const */ char *argv[]) {
  return igloo::TestRunner::RunAllTests(argc, argv);
}
