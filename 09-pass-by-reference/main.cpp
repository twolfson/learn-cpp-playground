// my first program in C++
#include <iostream>
using namespace std;

int increase(int& a) {
  a *= 2;
}

int main()
{
  // Call our function and output the result
  int x = 2;
  increase(x);
  cout << x << endl;
}
