#include <iostream>
#include <fstream>
using namespace std;

void checkStatus(ifstream& stream);

int main(int argc, char const *argv[])
{
  if (argc != 3) {
    cerr << "Usage: PR <source> <dest>\n";
    exit(1);
  }

  ifstream fin(argv[1]);
  if (!fin) {
    cerr << "couldn't open the file: " << argv[1] << endl;
    exit(1);
  }

  ofstream fout(argv[2]);
  if (!fout) {
    cerr << "couldn't open the file: " << argv[2] << endl;
    exit(1);
  }

  char ch;
  while (fin.get(ch)) {
    checkStatus(fin);
         if (isupper(ch)) { fout.put(tolower(ch)); }
    else if (islower(ch)) { fout.put(toupper(ch)); }
    else                  { fout.put(ch);          }
  }

  checkStatus(fin);

  fin.close();
  fout.close();

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
