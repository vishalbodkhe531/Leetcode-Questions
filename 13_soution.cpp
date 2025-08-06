#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  int length = arr.size();
  int rightPtr = length - 1;
  int maxWater = 0, leftPtr = 0;
  // int calculat = 0, width = 0, minHeight = 0, leftPtr = 0;
  // int width = 0;
  while (leftPtr < rightPtr) {
    int width = rightPtr - leftPtr;
    cout << &width << endl;
    int minHeight = min(arr[leftPtr], arr[rightPtr]);
    int calculat = width * minHeight;
    maxWater = max(calculat, maxWater);
    arr[leftPtr] < arr[rightPtr] ? leftPtr++ : rightPtr--;
  }

  cout << maxWater;

  return 0;
}