#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "This,is,a,string";
  stringstream ss(str);
  string token;
  char delim = ',';

  // Split the string using getline()
  while (getline(ss, token, delim)) {
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
