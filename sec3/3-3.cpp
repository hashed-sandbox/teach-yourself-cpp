#include <iostream>
using namespace std;

#define LIGHT_SPEED 186000.0

class planet {
  double dist_from_sun;  // [mi/s]
public:
  planet(double distance) { dist_from_sun = distance; }
  double get_miles() { return dist_from_sun; }
};

double light(planet p)
{
  return p.get_miles() / LIGHT_SPEED;
}

int main()
{
  planet saturn(888184372.5);
  cout << light(saturn) << " sec\n";

  return 0;
}
