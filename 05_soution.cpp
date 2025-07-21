#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  string str = "aabbccddeea";
  string result = "";
  unordered_set<char> container;

  for (char ch : str) {
    if (container.find(ch) ==
        container.end()) {  // map.end() means "not found".
      result += ch;
      container.insert(ch);
    }
  }

  cout << "After removing duplicates: " << result << endl;
  return 0;
}
