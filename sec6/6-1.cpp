#include <iostream>
using namespace std;

class coord {
  int x, y;

public:
  coord(int i = 0, int j = 0) { x = i; y = j; }

  void get_xy(int& i, int& j) { i = x; j = y; }
  void print() { cout << "(x, y) = (" << x << ", " << y << ")\n"; }

  void operator<<(int shift) { x -= shift; y -= shift; }
  void operator>>(int shift) { x += shift; y += shift; }
};

int main()
{
  int x, y;
  int shift = 2;

  coord p(3, 5);
  p.get_xy(x, y);
  p.print();

  cout << "<< shift: " << shift << endl;
  p << shift;
  p.print();

  cout << ">> shift: " << shift << endl;
  p >> shift;
  p.print();

  return 0;
}
