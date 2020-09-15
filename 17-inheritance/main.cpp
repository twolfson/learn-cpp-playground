// Load in our dependencies
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int _width, int _height) {
      this->width = _width;
      this->height = _height;
    }
};

// DEV: Intentionally forcing broken state with `protected` instead of `public`
class Rectangle: protected Polygon {
  public:
    int area () { return this->width * this->height; }
};

int main (){
  Rectangle rect_a;
  rect_a.set_values(5, 2);
  cout << rect_a.area() << endl;
}
