#include <iostream>
using namespace std;

int bubbleSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    bool isSwap = false;
    for (int j = 0; j < n - (i - 1); j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSwap = true;
      }
    }
    if (!isSwap) return;
  }
}

void printArr(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {4, 1, 5, 2, 3};
  int arrLength = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, arrLength);
  printArr(arr, arrLength);
  return 0;
}