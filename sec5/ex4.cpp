#include <iostream>
using namespace std;

class samp {
  int a;
public:
  samp() { a = 1; }
  samp(int n) { a = n; }
  int get_a() { return a; }
};

int main()
{
  samp ob(88);
  samp obarray[10];

  cout << ob.get_a() << endl;

  for (int i = 0; i < 10; i++) {
    cout << obarray[i].get_a() << endl;
  }

  return 0;
}
