#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char* p;
  int len;
public:
  strtype(char* ptr);
  ~strtype() { cout << "free p\n"; free(p); }
  void show() { cout << p << " - length: " << len << endl; }
  friend char* get_string(strtype* st);
};

strtype::strtype(char* ptr)
{
  len = strlen(ptr);
  p = (char*) malloc(len + 1);

  if (!p) {
    cout << "Memory Allocation Error\n";
    exit(1);
  }
  strcpy(p, ptr);
}

char* get_string(strtype* st)
{
  return st->p;
}

int main()
{
  strtype st("Foo Bar");
  cout << get_string(&st) << endl;

  return 0;
}
