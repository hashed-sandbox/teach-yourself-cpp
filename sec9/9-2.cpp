#include <iostream>
#include <iomanip>
using namespace std;

istream& findalpha(istream& stream)
{
  char ch;
  while (!isalpha(ch = stream.get())) {}
  stream.putback(ch);

  return stream;
}

int main()
{
  char buf[80];
  cout << "input:" << endl;
  cin >> findalpha >> buf;
  cout << buf;

  return 0;
}
