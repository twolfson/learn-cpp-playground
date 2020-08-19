#include <iostream>
using namespace std;

int increase(int& a) {
  a *= 2;
}

int extend(string& a) {
  a += "bar";
}

int main()
{
  // Call our function and output the result
  // int x = 2;
  // increase(x);
  string x = "foo";
  extend(x);
  cout << x << endl;
}
