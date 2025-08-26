#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<string> arr = {"a", "b", "c"};
  int arrLength;
  if (arr.size() % 2 == 0) {
    arrLength = arr.size() / 2;
  } else {
    arrLength = arr.size() / 2 + 1;
  }
  for (int i = 0; i < arrLength; i++) {
    string str = arr[arr.size() - (i + 1)];
    arr[arr.size() - (i + 1)] = arr[i];
    arr[i] = str;
  }

  for (string i : arr) {
    cout << i << " ";
  }
  return 0;
}
