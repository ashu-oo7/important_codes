#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "This,is,a,string";
  string token;
  char delim = ',';

  // Split the string using getline()
  while (getline(str, token, delim)) {
    cout << token << endl;
  }

  return 0;
}
/*
output
This
is
a
string
*/
