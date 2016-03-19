#include <iostream>
using namespace std;

class list {
public:
  list* head;
  list* tail;
  list* next;
  int num;

  list() { head = tail = next = nullptr; }

  virtual void store(int i) = 0;
  virtual int retrieve() = 0;

  void operator+(int i) { store(i); }
  int operator--() { return retrieve(); }
  int operator--(int notused) { return retrieve(); }
};

class queue : public list {
public:
  void store(int i);
  int retrieve();
};

void queue::store(int i)
{
  list* item;
  item = new queue;

  if (!item) {
    cerr << "memory allocation error\n";
    exit(1);
  }
  item->num = i;

  if (tail) tail->next = item;
  tail = item;
  item->next = nullptr;
  if (!head) head = tail;
}

int queue::retrieve()
{
  int i;
  list* p;

  if (!head) {
    cout << "list is empty\n";
    return 0;
  }

  i = head->num;
  p = head;
  head = head->next;
  delete p;
  return i;
}

class stack : public list {
public:
  void store(int i);
  int retrieve();
};

void stack::store(int i)
{
  list* item;
  item = new stack;

  if (!item) {
    cerr << "memory allocaiton error\n";
    exit(1);
  }
  item->num = i;

  if (head) item->next = head;
  head = item;
  if (!tail) tail = head;
}

int stack::retrieve()
{
  int i;
  list* p;

  if (!head) {
    cout << "list is empty\n";
    return 0;
  }

  i = head->num;
  p = head;
  head = head->next;
  delete p;
  return i;
}

int main()
{
  list* p;

  queue q_ob;
  p = &q_ob;

  *p + 1; *p + 2; *p + 3;

  cout << "Queue: ";
  cout << (*p)-- << (*p)-- << (*p)-- << endl;

  stack s_ob;
  p = &s_ob;

  *p + 1; *p + 2; *p + 3;

  cout << "Stack: ";
  cout << (*p)-- << (*p)-- << (*p)-- << endl;

  return 0;
}
