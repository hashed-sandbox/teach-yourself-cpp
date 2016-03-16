#include <iostream>
using namespace std;

#define SIZE 26

class stack {
  char stck[SIZE];
  int tos;
public:
  stack() { tos = 0; }
  void push(char ch);
  char pop();
};

void stack::push(char ch)
{
  if (tos == SIZE) {
    cout << "stack is full\n";
    return;
  }
  stck[tos] = ch;
  tos++;
}

char stack::pop()
{
  if (tos == 0) {
    cout << "stack is empty\n";
    return 0;
  }
  tos--;
  return stck[tos];
}

stack loadstack(int upper)
{
  stack st;

  if (upper == 1) {
    for (char ch = 'A'; ch <= 'Z'; ch++) { st.push(ch); }
  } else {
    for (char ch = 'a'; ch <= 'z'; ch++) { st.push(ch); }
  }

  return st;
}


stack loadstack()
{
  return loadstack(0);
}

int main()
{
  stack stUpper = loadstack(1);
  stack stLower = loadstack();

  int i;
  for (i = 0; i < SIZE; i++) { cout << stUpper.pop() << endl; }
  for (i = 0; i < SIZE; i++) { cout << stLower.pop() << endl; }

  return 0;
}
