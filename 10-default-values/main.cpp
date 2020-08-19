#include <iostream>
using namespace std;

// string concat(string& a, string b="hi") {
string concat(string& a, string& b) {
  return a+b;
}
string concat(string& a) {
  string b = "hi";
  return concat(a, b);
}

int main()
{
  // Call our function and output the result
  string x = "foo";
  string y = "bar";
  string output = concat(x);
  cout << output << endl;
}
