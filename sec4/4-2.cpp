#include <iostream>
using namespace std;

class a_type {
  double a, b;
public:
  a_type(double x, double y) { a = x; b = y; }
  void show() { cout << a << ' ' << b << endl; }
};

int main()
{
  a_type array[2][3] = {
    a_type(1.0, 2.0), a_type(2.0, 3.0), a_type(3.0, 4.0),
    a_type(4.0, 5.0), a_type(5.0, 6.0), a_type(6.0, 7.0)
  };

  a_type* p = array[0];
  for (int i = 0; i < 6; i++) {
    p->show();
    p++;
  }

  return 0;
}
