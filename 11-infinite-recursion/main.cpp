#include <iostream>
using namespace std;

int recurse(int x) {
  cout << x << endl;
  return recurse(x+1);
}

int main() {
  // Recurse infinitely
  recurse(1);
}
