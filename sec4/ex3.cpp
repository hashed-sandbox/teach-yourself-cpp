#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class samp {
  char* s;
public:
  samp() { s = '\0'; }
  ~samp() { if (s) free(s); cout << "free s\n"; }
  void show() { cout << s << endl; }
  void set(char* str);
};

void samp::set(char* str)
{
  int len = strlen(str);
  s = new char [len + 1];

  if (!s) {
    cout << "memory allocation error\n";
    exit(-1);
  }
  strcpy(s, str);
}

void input(samp& obj)
{
  char s[80];

  cout << "string? ";
  cin >> s;

  obj.set(s);
}

int main()
{
  samp ob;

  input(ob);
  ob.show();

  return 0;
}
