#ifndef __PG_RECTANGLE__
#define __PG_RECTANGLE__

// Define our rough class
class Rectangle {
  public:
    int width;
    int height;
    Rectangle(int _width, int _height);
};

// Implement our class methods
Rectangle::Rectangle(int _width, int _height) {
  this->width = _width;
  this->height = _height;
}

#endif // __PG_RECTANGLE__
