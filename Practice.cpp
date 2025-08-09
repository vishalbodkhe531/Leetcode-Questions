#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target) {
  int st = 0, ed = arr.size();
  while (st <= ed) {
    int mid = st + (ed - st) / 2;
    if (arr[mid] < target) {
      st = mid + 1;
    } else if (target < arr[mid]) {
      st = mid - 1;
    } else {
      return mid;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
  int target = 12;
  cout << binarySearch(arr, target);
  return 0;
}