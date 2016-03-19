#include <iostream>
#include <iomanip>
using namespace std;

ostream& setup(ostream& stream)
{
  return stream << "\t\t\t" << setw(20);
}

int main()
{
  cout << setup << (1.0 / 3.0) << endl;

  return 0;
}
