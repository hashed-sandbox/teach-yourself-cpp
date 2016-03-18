#include <iostream>
#include <iomanip>
using namespace std;

inline ios::fmtflags saveFlags()
{
  return cout.flags();
}

inline void restoreFlags(ios::fmtflags& f)
{
  cout << setiosflags(f);
}

int main()
{
  ios::fmtflags f;

  f = saveFlags();
  restoreFlags(f);

  cout << 100.32 << endl;

  return 0;
}
