#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& vec) {
  int ans = 0;
  for (int value : vec) {
    ans ^= value;
  }
  return ans;
}

int main() {
  vector<int> vec = {1, 2, 3, 2, 3};
  cout << singleNumber(vec);
  return 0;
}

// XOR-Based Approach Only Works When:
// Every number appears exactly twice, except one that appears once.
// Example where XOR works:
// vector<int> vec = {1, 2, 3, 2, 3}; // Only 1 appears once
// This would correctly give 1.