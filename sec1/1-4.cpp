#include <iostream>
using namespace std;

void rev_str(char*);
void rev_str(char*, char*);

int main()
{
  char s1[80], s2[80];
  strcpy(s1, "hello");
  rev_str(s1, s2);
  rev_str(s1);

  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;

  return 0;
}

void rev_str(char* str1)
{
  char* str2 = (char*)malloc(strlen(str1));

  rev_str(str1, str2);
  strcpy(str1, str2);
}

void rev_str(char* str1, char* str2)
{
  memset(str2, 0, strlen(str1) + 1);

  int length = strlen(str1);
  for (int i = 0; i < length; i++) {
    str2[i] = str1[length - i - 1];
  }
}
