#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  string str = "aabccdeff";
  unordered_map<char, int> container;

  for (char ch : str) {
    container[ch]++;  // key -> value(increament by one);
  }

  cout << "Non-repeating characters: ";

  for (char ch : str) {
    if (container[ch] == 1) {
      cout << ch << " ";
    }
  }

  return 0;
}