#include <iostream>
using namespace std;

int main()
{
  cout.width(20);
  cout.precision(6);
  cout.fill('*');
  cout.setf(ios::left);

  cout << 1000.5364 << endl;

  return 0;
}
