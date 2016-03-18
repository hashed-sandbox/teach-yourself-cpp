#include <iostream>
using namespace std;

class ft_to_inches {
  double feet;
  double inches;

public:
  void set(double f) {
    feet = f;
    inches = f * 12;
  }

  friend istream& operator>>(istream& stream, ft_to_inches& fi);
  friend ostream& operator<<(ostream& stream, ft_to_inches& fi);
};

istream& operator>>(istream& stream, ft_to_inches& fi)
{
  double value;

  stream >> value;
  fi.set(value);

  return stream;
}

ostream& operator<<(ostream& stream, ft_to_inches& fi)
{
  stream << fi.feet   << " feet = "
         << fi.inches << " inches";

  return stream;
}

int main()
{
  ft_to_inches fi;

  cout << "feet? ";
  cin >> fi;
  cout << fi << endl;

  return 0;
}
