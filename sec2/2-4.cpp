#include <iostream>
using namespace std;

#define PI 3.14159

class area_cl {
public:
  double width;
  double height;
};

class cylinder : public area_cl {
public:
  cylinder(double w, double h) { width = w; height = h; }
  double area();
};

double cylinder::area()
{
  return PI * width * width / 2 // width = 2 * radius
       + PI * width * height;
}

int main()
{
  cylinder cyl(2.0, 3.0);
  cout << "cyl: " << cyl.area() << endl;

  return 0;
}
