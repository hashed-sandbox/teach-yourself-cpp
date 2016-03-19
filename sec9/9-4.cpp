#include <iostream>
#include <fstream>
using namespace std;

void checkStatus(ifstream& stream);

class alphaCounter {
  int counter[26];

public:
  alphaCounter() { for (int i = 0; i < 26; i++) counter[i] = 0; }

  int& operator[](char ch);
  friend ostream& operator<<(ostream& stream, alphaCounter& counter);
};

int& alphaCounter::operator[](char ch)
{
  if (!isalpha(ch)) {
    cerr << "invalid character: " << ch << endl;
    exit(1);
  }

  ch = tolower(ch);
  return counter[ch - 'a'];
}

ostream& operator<<(ostream& stream, alphaCounter& counter)
{
  for (char ch = 'a'; ch <= 'z'; ch++) {
    stream << ch << ": " << counter[ch] << endl;
  }
  return stream;
}

int main(int argc, char const *argv[])
{
  if (argc != 2) {
    cerr << "Usage: PR <filename>\n";
    exit(1);
  }

  ifstream fin(argv[1]);
  if (!fin) {
    cerr << "couldn't open the file: " << argv[1] << endl;
    exit(1);
  }

  alphaCounter counter;

  char ch;
  while (fin.get(ch)) {
    checkStatus(fin);
    if (isalpha(ch)) counter[ch]++;
  }

  checkStatus(fin);
  fin.close();

  cout << counter;

  return 0;
}

void checkStatus(ifstream& stream)
{
  ios::iostate i;
  i = stream.rdstate();

       if (i & ios::eofbit)  { cout << "EOF\n"; }
  else if (i & ios::failbit) { cout << "fail\n"; }
  else if (i & ios::badbit)  { cout << "bad\n";  }
}
