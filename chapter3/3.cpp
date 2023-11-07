#include <iostream>
#include <vector>
#include <string>

using namespace std;

//没讲到map，所以用vector代替
typedef vector<string>::size_type vec_size;
int main() {
  vector<string> words;
  vector<int> counts;
  cout << "please enter words: " << endl;
  string word;
  // 这里的停止条件是ctrl+d (ctrl + z for windows)
  while(cin >> word){
    bool flag = false;
    for (vec_size i = 0; i < words.size(); i++) {
      if (word == words[i]) {
        counts[i]++;
        flag = true;
        break;
      }
    }
    if (!flag) {
      words.push_back(word);
      counts.push_back(1);
    }
  }
  for (vec_size i = 0; i < words.size(); i ++ ){
    cout << words[i] << " : " << counts[i] << endl;
  }
  return 0;
}
