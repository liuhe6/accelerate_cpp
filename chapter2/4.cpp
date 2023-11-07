#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "please enter your name: ";
  string name;
  cin >> name;
  const string greeting = "Hello, " + name + "!";
  int pad = 2;
  const int rows = pad * 2 + 3;
  const string::size_type cols = greeting.size() + pad * 2 + 2;
  const string spaces(greeting.size() + pad * 2, ' ');
  for (int r = 0; r != rows; r++) {
    string::size_type c = 0;
    while(c != cols) {
      if (r == pad + 1 && c == pad + 1) {
        cout << greeting;
        c += greeting.size();
      } else {
        if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
          cout << "*";
          ++c;
        } else if(r == pad + 1) {
          cout << " ";
          ++c;
        } 
        else {
          cout << spaces;
          c += spaces.size();
        }
      }
    }
    cout << endl;
  }
  return 0;
}
