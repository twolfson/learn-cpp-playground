// Load in our dependencies
#include <iostream>
#include "./main.cpp"
using playground::Node;
using std::cout;
using std::endl;

// Define our tests
int main() {
  Node<int>* head_node_ptr;
  head_node_ptr = new Node<int> {100};
  cout << head_node_ptr->value << endl;
}
