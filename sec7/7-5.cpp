#include <iostream>
using namespace std;

#define PI 3.14159

class planet {
protected:
  double distance;  // [mi]
  int revolve;      // [days]

public:
  planet(double d, int r) { distance = d, revolve = r; }
};

class earth : public planet {
  double circumference;

public:
  earth(double d, int r) : planet(d, r) {
    circumference = 2 * PI * d;
  }

  void show() {
    cout << circumference << " mi, " << revolve << " days\n";
  }
};

int main()
{
  earth ob(93000000.0, 365);

  ob.show();

  return 0;
}
