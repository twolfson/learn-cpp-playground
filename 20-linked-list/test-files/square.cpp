// Load in our dependencies
#include "./square.hpp"

// Implement our class methods
Square::Square(int side) {
  // TODO: Can we call `Rectangle` constructor instead somehow?
  this->width = side;
  this->height = side;
}
