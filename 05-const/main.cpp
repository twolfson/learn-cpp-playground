#include <iostream>
using namespace std;

const double pi = 3.14159;

int main()
{
  // Attempt to override `pi`
  pi = 3.14;

  // Output pi
  cout << pi << endl;

  // Return 0 as desired
  return 0;
}
