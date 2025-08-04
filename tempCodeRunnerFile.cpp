#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> heightArr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int maxWater = 0;
  for (int i = 0; i < heightArr.size(); i++) {
    for (int j = i + 1; j < heightArr.size(); j++) {
      int gap = j - i;
      int minHeight = min(heightArr[i], heightArr[j]);
      int currentWater = minHeight * gap;
      maxWater = max(currentWater, maxWater);
    }
  }

  cout << maxWater;
  return 0;
}