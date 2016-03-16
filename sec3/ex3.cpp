#include <iostream>
using namespace std;

class base {
  int a;
public:
  void load_a(int n) { a = n; }
  int get_a() { return a; }
};

class derived : public base {
  int b;
public:
  void load_b(int n) { b = n; }
  int get_b() { return b; }
};

int main()
{
  derived obj1, obj2;

  obj1.load_a(2);
  obj1.load_b(3);

  obj2.load_a(5);
  obj2.load_b(7);

  obj1 = obj2;

  cout << "obj1: " << obj1.get_a() << " " << obj1.get_b() << endl;
  cout << "obj2: " << obj2.get_a() << " " << obj2.get_b() << endl;

  return 0;
}
