// Load in our dependencies
#include <iostream>
using std::cout;
using std::endl;

// Define our proof of concept code
template <typename T>
class Foo {
  public:
    T val;
    Foo (T _val);
};
template <typename T>
Foo<T>::Foo(T _val) {
  this->val = _val;
}

int main() {
  Foo<int> foo {3};
  cout << foo.val << endl;
}
