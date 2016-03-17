#include <iostream>
using namespace std;

void order(int& x, int& y)
{
  if (x > y) {
    int t = x;
    x = y;
    y = t;
  }
}

int main()
{
  int x = 1, y = 0;
  order(x, y);
  cout << "(x, y) = (" << x << ", " << y << ")\n";

  return 0;
}
