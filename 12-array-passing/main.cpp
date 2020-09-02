// Load in our dependencies
#include <iostream>
using namespace std;


// Define our functions
void printarr(int arr[], int length) {
  for (int i = 0; i < length; i += 1) {
    cout << arr[i] << ' ';
  }
  cout << endl;
}

int main() {
  const int multiples_length = 3;
  int multiples[multiples_length] = {5, 10, 15};
  printarr(multiples, multiples_length);
}
