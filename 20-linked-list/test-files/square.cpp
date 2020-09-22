// Load in our dependencies
#include "./rectangle.h"
#include "./square.h"

// Implement our class methods
Square::Square(int side) : Rectangle(side, side) {
  // Call `Rectangle` constructor via `:` syntax above
  // https://stackoverflow.com/a/33441563
}
