#ifndef __PG_SQUARE__
#define __PG_SQUARE__

// Load in our dependencies
#include "./rectangle.h"

// Define our square
class Square : public Rectangle {
  public:
    Square(int side);
};

#endif // __PG_SQUARE__
