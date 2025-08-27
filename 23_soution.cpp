#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "the sky is blue";
  string ans = "";
  reverse(str.begin(), str.end());

  for (int i = 0; i < str.length(); i++) {
    string word = "";
    while (i < str.length() && str[i] != ' ') {
      word += str[i];
      i++;
    }
    reverse(word.begin(), word.end());
    if (word.length() > 0) {
      ans += " " + word;
    }
  }

  cout << ans.substr(1);

  return 0;
}