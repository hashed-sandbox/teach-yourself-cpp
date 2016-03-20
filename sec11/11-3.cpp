#include <iostream>
#include <utility>
#include <string>
using namespace std;

template <class T>
void bubbleSort(T* array, int size)
{
  for (int i = 0; i < size - 1; i++)
    for (int j = i; j < size - 1; j++)
      if (array[j] > array[j + 1])
        swap(array[j], array[j + 1]);
}

int main()
{
  int nums[5] = { 3, 1, 2, 5, 4 };
  string strs[5] = { "one",  "two", "three", "four", "five" };

  bubbleSort(nums, 5);
  bubbleSort(strs, 5);

  for (const int& n : nums) cout << n << ' ';
  cout << endl;

  for (const string& s : strs) cout << s << ' ';
  cout << endl;

  return 0;
}
