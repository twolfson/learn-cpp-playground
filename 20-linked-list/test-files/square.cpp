// Load in our dependencies
#include "./rectangle.hpp"
#include "./square.hpp"

// Implement our class methods
Square::Square(int side) : Rectangle(side, side) {
  // Call `Rectangle` constructor via `:` syntax above
  // https://stackoverflow.com/a/33441563
}
