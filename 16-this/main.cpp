// Load in our dependencies
#include <iostream>
using namespace std;

class Rectangle {
  public:
    int width, height;
    Rectangle ();
};
Rectangle::Rectangle () {
  this->width = 5;
  this->height = 5;
}

int main (){
  Rectangle rect_a;
  cout << rect_a.width << endl;
}
