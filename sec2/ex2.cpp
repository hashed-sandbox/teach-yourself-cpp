#include <iostream>
using namespace std;

class feet2inch {
  double feet;
  double inch;
public:
  feet2inch(double feet);
};

feet2inch::feet2inch(double feet)
{
  this->feet = feet;
  this->inch = feet * 12;
  cout << feet << " ft is " << inch << " in." << endl;
}

int main()
{
  feet2inch fi(3.5);

  return 0;
}
