#include <iostream>

using namespace std;

int main() {
  cout << "please enter two number:";
  int a, b;
  cin >> a >> b;
  if (a > b) {
    cout << "a is bigger" << endl;
  } else if (a < b) {
    cout << "b is bigger" << endl;
  } else {
    cout << "a equals b" << endl;
  }
  return 0;
}
