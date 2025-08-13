#include <climits>
#include <iostream>
#include <vector>
using namespace std;

bool isPossibleValue(vector<int> arr, int n, int totlePainters,
                     int maxAllowedTime) {
  //  maxAllowedTime = 70,34,
  //  arr = {40, 30, 10, 20};
  //  time = 40,70,0,40,30,10,30
  //  time2 = 10,30,0
  //  painter = 1,2,1,2,3,4,
  int painter = 1, time = 0;
  for (int i = 0; i < n; i++) {
    if (time + arr[i] <= maxAllowedTime) {
      time += arr[i];
    } else {
      painter++;
      time = arr[i];
    }
  }
  return painter <= totlePainters;
}

int minTimeToPaint(vector<int> arr, int n, int totlePainters) {
  int maxValue = INT_MIN, sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
    maxValue = max(maxValue, arr[i]);
  }

  int st = maxValue, ed = sum, ans = -1;
  // st = 40,35
  // ed = 69,
  // mid = 70,34
  // ans = 70

  while (st <= ed) {
    int mid = st + (ed - st) / 2;
    if (isPossibleValue(arr, n, totlePainters, mid)) {
      ans = mid;
      ed = mid - 1;
    } else {
      st = mid + 1;
    }
  }
}

int main() {
  vector<int> arr = {40, 30, 10, 20};
  int n = 4, painters = 2;
  cout << minTimeToPaint(arr, n, painters);
  return 0;
}