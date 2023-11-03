#include <iostream>
#include <string>

using namespace std;

int main() {
  {
    const string s = "a string";
    cout << s << endl;
    {
      // 该作用域内的 s 会隐藏外层的 s
      // 所以会正常输出
      const string s = "another string";
      cout << s << endl;
    }
    // 输出 a string
    cout << s << endl;
  }
  return 0;
}
