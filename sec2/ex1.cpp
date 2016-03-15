#include <iostream>
using namespace std;

class prompt {
  int count;
public:
  prompt(char* str, int count);
  ~prompt();
};

prompt::prompt(char* str, int count)
{
  cout << str << endl;
  this->count = count;
}

prompt::~prompt()
{
  for (int i = 0; i < count; i++) {
    cout << '\x07';  // BEL
  }
}

int main()
{
  prompt p("hello", 5);

  return 0;
}
