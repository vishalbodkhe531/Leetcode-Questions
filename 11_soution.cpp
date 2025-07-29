#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  int currentSum = 0, maxSum = INT_MIN;
  for (int i : vec) {
    currentSum += i;
    maxSum = max(currentSum, maxSum);
    if (currentSum < 0) {
      currentSum = 0;
    }
  }

  cout << "Maximum Sum is : " << maxSum;
  return 0;
}