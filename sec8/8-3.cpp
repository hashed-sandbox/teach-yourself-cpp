#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  cout << dec << 100 << endl
       << hex << 100 << endl
       << oct << 100 << endl;

  cout << dec << setw(20) << left
       << setprecision(6) << setfill('*')
       << 1000.5364 << endl;

  return 0;
}
