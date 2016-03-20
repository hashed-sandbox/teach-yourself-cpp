#include <iostream>
#include <numeric>
#include <list>
#include <string>
using namespace std;

template <class T>
T calcSum(T* array, int size, T init)
{
  list<T> lst;
  for (int i = 0; i < size; i++)
    lst.push_back(array[i]);

  return accumulate(lst.begin(), lst.end(), init);
}

int main()
{
  int nums[5] = { 1, 2, 3, 4, 5 };
  string strs[5] = { "a", "b", "c", "d", "e" };

  cout << calcSum(nums, 5, 0) << endl;
  cout << calcSum(strs, 5, string("")) << endl;

  return 0;
}
