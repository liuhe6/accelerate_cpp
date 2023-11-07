#include <iostream>

using namespace std;

int main() {
  int e = 1;
  for (int i = 1; i < 10; i++) {
    e *= i;
  }
  cout << e << endl;
  return 0;
}
