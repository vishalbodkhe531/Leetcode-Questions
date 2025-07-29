#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {1, 2, 2, 2, 1, 1};
  unordered_map<int, int> mapContainer;

  for (int i : vec) {
    mapContainer[i]++;
  }

  for (auto i : mapContainer) {
    if (i.second > (vec.size() / 2)) {
      cout << i.first << " = " << i.second;
    }
  }

  return 0;
}