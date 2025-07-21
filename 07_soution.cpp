#include <iostream>
using namespace std;

int main() {
  int arr[] = {4, 2, 5, 7, 2};

  int max = arr[0];
  for (int i = 0; i < (sizeof(arr) / 4); i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  cout << max;

  return 0;
}