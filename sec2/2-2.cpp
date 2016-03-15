#include <iostream>
using namespace std;

class line
{
  int len;
public:
  line(int length);
};

line::line(int length)
{
  len = length;

  for (int i = 0; i < len; i++) {
    cout << '*';
  }
  cout << endl;
}

int main()
{
  line line1(5), line2(10);

  return 0;
}
