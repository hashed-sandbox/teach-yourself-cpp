#include <iostream>
using namespace std;

class vehicle {
  int num_wheels;
  int range;

public:
  vehicle(int w, int r) { num_wheels = w; range = r; }

  void showv()
  {
    cout << "The number of wheels: " << num_wheels << endl;
    cout << "The range of driving: " << range << endl;
  }
};

enum motor { gas, electric, diesel };

class motorized : virtual public vehicle {
  enum motor mtr;

public:
  motorized(enum motor m, int w, int r) : vehicle(w, r) { mtr = m; }

  void showm()
  {
    cout << "Engine: ";
    switch (mtr) {
      case gas:
        cout << "Gasoline\n"; break;
      case electric:
        cout << "Electric\n"; break;
      case diesel:
        cout << "Diesel\n"; break;
    }
  }
};

class road_use : virtual public vehicle {
  int passengers;

public:
  road_use(int p, int w, int r) : vehicle(w, r) { passengers = p; }

  void showr()
  {
    cout << "Passengers: " << passengers << endl;
  }
};

enum steering { power, rack_pinion, manual };

class car : public motorized, public road_use {
  enum steering strng;

public:
  car(enum steering s, enum motor m, int w, int r, int p) :
    road_use(p, w, r), motorized(m, w, r), vehicle(w, r)
  {
    strng = s;
  }

  void show()
  {
    showv(); showr(); showm();
    cout << "Steering: ";
    switch (strng) {
      case power:
        cout << "Power\n"; break;
      case rack_pinion:
        cout << "Rack Pinion\n"; break;
      case manual:
        cout << "Manual\n"; break;
    }
  }
};

int main()
{
  car c(power, gas, 4, 500, 5);

  c.show();

  return 0;
}
