// my first program in C++
#include <iostream>
using namespace std;

int main()
{
  // Declare and initialize our variables
  // DEV: Close spacing seems to be a thing for initialization
  int a=7;
  int b(1);
  int result{a - b};

  // Output our variables
  cout << result;
  cout << "\n";

  return 0;
}
