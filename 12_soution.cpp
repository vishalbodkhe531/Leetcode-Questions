#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
  unordered_map<int, int> mapContainer;
  int maxNo = 0;
  for (int i : nums) {
    mapContainer[i]++;
  }

  for (auto i : mapContainer) {
    if (i.second > (nums.size() / 2)) {
      maxNo = i.first;
    }
  }

  cout << maxNo;
  return 0;
}