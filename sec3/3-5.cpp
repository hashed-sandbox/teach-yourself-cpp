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

stack loadstack()
{
  stack st;
  for (char ch = 'a'; ch <= 'z'; ch++) { st.push(ch); }

  return st;
}

int main()
{
  stack st;
  st = loadstack();

  int i;
  for (i = 0; i < SIZE; i++) { cout << st.pop() << endl; }

  return 0;
}
