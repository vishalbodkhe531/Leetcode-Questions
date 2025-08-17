#include <iostream>
using namespace std;

int main() {
  int arr1[] = {1, 2, 3, 0, 0, 0};
  int arr2[] = {2, 5, 6};
  int a = 2, b = 2, k = 5;  // directly put actuale size

  while (a >= 0 && b >= 0) {
    if (arr1[a] > arr2[b]) {
      arr1[k] = arr1[a--];
    } else {
      arr1[k] = arr2[b--];
    }
    k--;
  }
  // In case of arr1[] = {4,5,6} and arr2[] = {1,2,3}; then it's being
  // 4,5,6,4,5,6 that's why this loop
  while (b >= 0) {
    arr1[k--] = arr2[b--];
  }

  for (int i : arr1) {
    cout << i << " ";
  }

  return 0;
}