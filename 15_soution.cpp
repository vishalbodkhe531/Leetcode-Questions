#include <iostream>
#include <vector>
using namespace std;

int mountainIdx(vector<int> arr) {
  int st = 0, ed = arr.size() - 1;
  while (st <= ed) {
    int mid = st + (ed - st) / 2;
    if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
      return mid;
    } else if (arr[mid - 1] < arr[mid]) {
      st = mid + 1;
    } else {
      ed = mid - 1;
    }
  }
  return -1;  
}

int main() {
  vector<int> arr = {0, 1, 2, 4, 1, 0};
  cout << mountainIdx(arr);
  return 0;
}