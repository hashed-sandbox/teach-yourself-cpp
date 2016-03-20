#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main()
{
  vector<int> v;
  for (int i = 1; i <= 10; i++)
    v.push_back(i);

  list<int> l;
  for_each(v.begin(), v.end(), [&] (int& n) {
    if (n % 2 == 0) l.push_back(n);
  });

  for_each(l.begin(), l.end(), [] (int& n) {
    cout << n << endl;
  });

  return 0;
}
