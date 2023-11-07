#include <iostream>
#include <string>

using namespace std;

int main() {
  int a = 5;
  int b = 10;
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      if (i == 0 || i == a - 1 || j == 0 || j == b - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  int c = 10;
  int bottom = c * 2 - 1;
  for (int i = 0; i < c - 1; i++) {
    // 空格数量,因为c是行数，所以再减一个1
    int n = c - i - 2;
    int s = n + 1;
    int e = s + (2 * i);
    for (int j = 0; j <= e; j++) {
      if (j == s || j == e) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  cout << string(bottom, '*') << endl;
  return 0;
}
