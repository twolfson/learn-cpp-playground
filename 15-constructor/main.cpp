// Load in our dependencies
#include <iostream>
using namespace std;

class Rectangle {
  public:
    int width, height;
  public:
    Rectangle (int, int);
};
Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main (){
  Rectangle rect_a(3, 4);
  cout << rect_a.width << endl;
}
