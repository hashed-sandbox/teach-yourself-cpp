#include <iostream>
using namespace std;

char* reverse(char* str, int count = -1)
{
  int len = strlen(str);
  char* reversed = new char[len + 1];

  if (!reversed) {
    cout << "memory allocation error\n";
    exit(-1);
  }

  if (count < 0) {
    for (int i = 0; i < len; i++) {
      reversed[i] = str[len - i - 1];
    }
    reversed[len] = 0;  // null termination
  } else {
    strcpy(reversed, str);
    for (int i = 0; i < count; i++) {
      reversed[i] = str[count - i - 1];
    }
  }

  return reversed;
}

int main()
{
  char* str1 = "hello";
  char* reversed1 = reverse(str1);
  cout << str1 << " -> " << reversed1 << endl;

  char* str2 = "Foo Bar";
  char* reversed2 = reverse(str2, 3);
  cout << str2 << " -> " << reversed2 << endl;

  return 0;
}
