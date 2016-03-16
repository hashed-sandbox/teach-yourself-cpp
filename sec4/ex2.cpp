#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char* p;
  int len;
public:
  strtype(char* ptr);
  ~strtype();
  void show();
};

strtype::strtype(char* ptr)
{
  len = strlen(ptr);
  p = new char [len + 1];

  if (!p) {
    cout << "memory allocation error\n";
    exit(1);
  }
  strcpy(p, ptr);
}

strtype::~strtype()
{
  cout << "free p\n";
  free(p);
}

void strtype::show()
{
  cout << p << " - length: " << len << endl;
}

int main()
{
  strtype s1("This is a test."), s2("I like C++.");

  s1.show();
  s2.show();

  return 0;
}
