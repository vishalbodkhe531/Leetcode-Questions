#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "daabcbaabcbc";
  string part = "abc";

  while (str.find(part) <= str.length()) {
    int idx = str.find(part);
    str.erase(idx, part.length());
  }

  cout << str;

  return 0;
}