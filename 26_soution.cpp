#include <climits>
#include <iostream>
using namespace std;

int main() {
  int arr[][3] = {{1, 2, 3}, {9, 9, 9}, {2, 8, 9}};
  int maxSum = INT_MIN;
  for (int i = 0; i < 3; i++) {
    int temp = 0;
    for (int j = 0; j < 3; j++) {
      temp += arr[i][j];
    }
    maxSum = max(maxSum, temp);
  }

  cout << maxSum;

  return 0;
}