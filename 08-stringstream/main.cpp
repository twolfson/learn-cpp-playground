// my first program in C++
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  // Receive input
  string input_str;
  int price;
  cout << "Enter price: ";
  getline(cin, input_str);
  stringstream(input_str) >> price;

  // Generate output
  cout << "Modified input: " << price * 2 << endl;

  // Return 0 as desired
  return 0;
}
