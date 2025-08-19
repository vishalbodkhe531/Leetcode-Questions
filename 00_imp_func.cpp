#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr1 = {4, 7, 5, 1, 8, 6};
  int arr2[] = {9, 3, 5, 1, 2, 7};

  //   for assending ordered
  sort(arr1.begin(), arr1.end());
  sort(arr2, arr2 + 6);  // for array :  starting point and ending point

  //   for desending ordered

  sort(arr2, arr2 + 6, greater<int>());
  sort(arr1.begin(), arr1.end(), greater<int>());

  for (int i : arr1) {
    cout << i << " ";
  }

  return 0;
}