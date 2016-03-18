#include <iostream>
using namespace std;

class pwr {
  int base;
  int exponent;
  double result;

public:
  pwr(int b, int e);

  friend ostream& operator<<(ostream& stream, pwr& p);
};

pwr::pwr(int b, int e)
{
  base = b;
  exponent = e;

  result = 1;
  for ( ; e; e--) { result *= base; }
}

ostream& operator<<(ostream& stream, pwr& p)
{
  stream << p.base << '^' << p.exponent << " = " << p.result << endl;
  return stream;
}

int main()
{
  pwr p1(2, 3), p2(6, 6);
  cout << p1 << p2;

  return 0;
}
