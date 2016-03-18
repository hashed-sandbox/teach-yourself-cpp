#include <iostream>
using namespace std;

class three_d {
  int x, y, z;

public:
  three_d(int i = 0, int j = 0, int k = 0) { x = i; y = j; z = k; }

  void get(int& i, int& j, int& k) { i = x; j = y; k = z; }
  void print() { cout << "(" << x << ", " << y << ", " << z << ")\n"; }

  three_d operator+();
  three_d operator+(three_d right);

  three_d operator-();
  three_d operator-(three_d right);

  three_d operator++();
  three_d operator--();
};

three_d three_d::operator+()
{
  three_d tmp;
  tmp.x = abs(x);
  tmp.y = abs(y);
  tmp.z = abs(z);

  return tmp;
}

three_d three_d::operator+(three_d right)
{
  three_d tmp;
  tmp.x = x + right.x;
  tmp.y = y + right.y;
  tmp.z = z + right.z;

  return tmp;
}

three_d three_d::operator-()
{
  three_d tmp;
  tmp.x = -abs(x);
  tmp.y = -abs(y);
  tmp.z = -abs(z);

  return tmp;
}

three_d three_d::operator-(three_d right)
{
  three_d tmp;
  tmp.x = x - right.x;
  tmp.y = y - right.y;
  tmp.z = z - right.z;

  return tmp;
}

three_d three_d::operator++()
{
  x++; y++; z++;
  return *this;
}

three_d three_d::operator--()
{
  x--; y--; z--;
  return *this;
}

int main()
{
  three_d p1(-2, 3, -5), p2(1, 3, -2);

  p1.print();
  p2.print();

  (+p1).print();
  (-p2).print();

  (p1 + p2).print();
  (p1 - p2).print();

  (++p1).print();
  (--p2).print();

  p1.print();
  p2.print();

  return 0;
}
