#include <iostream>
using namespace std;

int main() {
   int arr[] = {1, 3, 12, 3, 5, 0, 8, 5, 0, 1, 2};
  int pointer = 0;
  int length = sizeof(arr) / sizeof(arr[0]);

  for (int i : arr) {
    if (i != 0) {
      arr[pointer] = i;
      pointer++;
    }
  }

  while (pointer < length) {
    arr[pointer] = 0;
    pointer++;
  }

  for (int i : arr) {
    cout << i << " ";
  }

  return 0;
}