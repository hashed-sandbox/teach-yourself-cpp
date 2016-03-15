#include <iostream>
#include <ctime>
using namespace std;

class dice {
  int num;
public:
  void roll();
};

void dice::roll()
{
  srand(time(0));
  num = rand() % 6 + 1;
  cout << num << endl;
}

int main()
{
  dice d;
  d.roll();

  return 0;
}
