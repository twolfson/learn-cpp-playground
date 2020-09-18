// Load in our dependencies
#include <iostream>
using std::cout;
using std::endl;

// Define our proof of concept code
class Foo {
  public:
    int val;
};

int main() {
  Foo* foo_ptr = new Foo;
  cout << foo_ptr->val << endl;
}
