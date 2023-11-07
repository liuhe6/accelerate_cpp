#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
typedef vector<int>::size_type vec_size;
int main() {
  vector<int> v = {1,3,4,6,12,7, 8, 6};
  vec_size v_len = v.size();
  int a = v_len / 4;
  int b = v_len / 2;
  int c = v_len / 4 * 3;
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for (int i = 0; i < a; i++ ){
    cout << v[i] << " ";
  }
  cout << endl;
  for (int i = a; i < b; i++ ){
    cout << v[i] << " ";
  }
  cout << endl;
  for (int i = b; i < c; i++ ){
    cout << v[i] << " ";
  }
  cout << endl;
  for (int i = c; i < v_len; i++ ){
    cout << v[i] << " ";
  }
  cout << endl;

  return 0;
}
