#include <iostream>
using namespace std;

#define SIZE 10

class stack {
  char stck[SIZE];
  int tos;

public:
  stack() { tos = 0; }
  void push(char ch);
  char pop();

  friend ostream& operator<<(ostream& stream, stack st);
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
    return 0;  // null
  }
  tos--;
  return stck[tos];
}

inline ostream& operator<<(ostream& stream, stack st)
{
  while (st.tos > 0) { stream << st.pop() << endl; }
  return stream;
}

int main()
{
  stack st;
  for (char c = 'a'; c <= 'e'; c++) { st.push(c); }

  cout << st;

  return 0;
}
