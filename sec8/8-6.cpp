#include <iostream>
using namespace std;

class box {
  int len;

public:
  box(int l) { len = l; }
  friend ostream& operator<<(ostream& stream, box& b);
};

ostream& operator<<(ostream& stream, box& b)
{
  int row, col;

  for (col = 0; col < b.len; col++) { stream << '*'; }
  stream << endl;

  for (row = 1; row < b.len - 1; row++) {
    stream << '*';
    for (col = 1; col < b.len - 1; col++) { stream << ' '; }
    stream << '*' << endl;
  }

  for (col = 0; col < b.len; col++) { stream << '*'; }
  stream << endl;

  return stream;
}

int main()
{
  box b2(2), b5(5), b10(10);

  cout << b2 << b5 << b10;

  return 0;
}
