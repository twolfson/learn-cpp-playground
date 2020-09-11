// Load in our dependencies
#include <iostream>
using namespace std;

struct product {
  int weight;
  double price;
};

int main() {
  // Declare our variables
  product apple;
  product* apple_ptr = &apple;

  // Use our `->` operator
  apple_ptr -> weight = 2;

  // Verify `->` worked with whitespace
  cout << apple.weight << endl;
}
