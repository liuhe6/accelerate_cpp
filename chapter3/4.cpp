#include <iostream>
#include <string>

const int N = 999999;
using namespace std;
int main() {
    string word;
    string::size_type max = 0, min = N;
    while (cin >> word) {
      if (word.size() > max) {
        max = word.size();
      }
      if (word.size() < min) {
        min = word.size();
      }
    }
    cout << max << " " << min << endl;
    return 0;
}
