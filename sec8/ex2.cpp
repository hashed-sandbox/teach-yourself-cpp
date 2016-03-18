#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

class watch {
  time_t memory;

public:
  watch(time_t t) { memory = t; }

  friend ostream& operator<<(ostream& stream, watch& w);
};

ostream& operator<<(ostream& stream, watch& w)
{
  tm* tm = localtime(&(w.memory));
  stream << setw(2) << setfill('0')
         << tm->tm_hour << ':'
         << setw(2) << setfill('0')
         << tm->tm_min  << ':'
         << setw(2) << setfill('0')
         << tm->tm_sec;

  return stream;
}

int main()
{
  watch w(time(nullptr));

  cout << w << endl;

  return 0;
}
