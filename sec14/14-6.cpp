#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
  map<string, string> directory;

  directory.insert(make_pair("TEL", "05-8462-1119"));
  directory.insert(make_pair("FAX", "07-8446-2374"));

  string name;
  cout << "name? ";
  cin >> name;

  map<string, string>::iterator p = directory.find(name);

  if (p != directory.end())
    cout << name << " : " << p->second << endl;
  else
    cout << "not found" << endl;

  return 0;
}
