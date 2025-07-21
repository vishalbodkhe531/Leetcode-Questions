#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {2, 11, 7, 15};
  int target = 9;
  // sec operation
  // 9 - 2 = 7
  // 9 - 11 = -2
  // 9 - 7 = 2
  // 9 - 15 = -6
  unordered_map<int, int> map;
  vector<int> ans;
  // {
  // "2"  : "0"
  // "11" : "1"
  // }

  // ans = 2,0

  for (int i = 2; i < arr.size(); i++) {
    int sec = target - arr[i];
    if (map.find(sec) != map.end()) {  // map.end() means "not found".
      ans.push_back(i);
      ans.push_back(map[sec]);
      break;
    }
    map[arr[i]] = i;
  }

  for (int i : ans) {
    cout << i << " ";
  }

  return 0;
}