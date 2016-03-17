#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

class date {
  int day, month, year;
public:
  date(char* str);
  date(time_t time);
  date(int m, int d, int y) { day = d; month = m; year = y; }
  void show() {
    cout << month << '/' << day << '/' << year << endl;
  }
};

date::date(char* str)
{
  sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

date::date(time_t time)
{
  tm* t = localtime(&time);
  day   = t->tm_mday;
  month = t->tm_mon + 1;
  year  = t->tm_year;
}

int main()
{
  date sdate("12/31/99");
  date tdate(time(nullptr));
  date idate(12, 31, 99);

  sdate.show();
  tdate.show();
  idate.show();

  return 0;
}
