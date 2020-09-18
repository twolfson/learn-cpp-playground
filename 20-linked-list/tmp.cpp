// Load in our dependencies
#include <iostream>
using std::cout;
using std::endl;

// Define our proof of concept code
template <typename T>
class Foo {
  public:
    T val;
};

int main() {
  Foo<int>* foo_ptr = new Foo<int>;
  cout << foo_ptr->val << endl;
}
