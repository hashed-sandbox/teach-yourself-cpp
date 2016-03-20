#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

template <class T>
T retrieveMode(T* array, int size)
{
  map<T, int> counter;
  map<T, int>::iterator p;
  using pair_type = decltype(counter)::value_type;

  for (int i = 0; i < size; i++) {
    T key = array[i];
    p = counter.find(key);

    if (p == counter.end())
      counter.insert(make_pair(key, 1));
    else
      p->second++;
  }

  p = max_element(counter.begin(), counter.end(),
    [] (pair_type &p1, pair_type &p2) {
      return p1.second < p2.second;
    }
  );

  return p->first;
}

int main()
{
  char array[10] = {
    'a', 'c', 'e', 'e', 'b',
    'b', 'e', 'd', 'a', 'f'
  };

  cout << "mode: " << retrieveMode(array, 10) << endl;

  return 0;
}
