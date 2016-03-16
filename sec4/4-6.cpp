#include <iostream>
using namespace std;

void recip(double& n);

int main()
{
  double n = 4.0;
  cout << "n = " << n << endl;

  cout << "1/n = ";
  recip(n);
  cout << n << endl;

  return 0;
}

void recip(double& n)
{
  n = 1.0 / n;
}
