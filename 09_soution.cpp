#include <iostream>
using namespace std;

int main() {
  int arr[] = {0, 1, 0, 3, 12};
  int n = sizeof(arr) / sizeof(arr[0]);

  int pos = 0; // Pointer for non-zero placement
   
  // pos = 2;
  // 1,0,0,3,12
  // 1,3,0,0,12 
  // Step 1: Move non-zero elements to the front
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      arr[pos] = arr[i];
      pos++;
      
    }
  }

  // Step 2: Fill the rest of the array with zeros
  while (pos < n) {
    arr[pos] = 0;
    pos++;
  }

  // Print the result
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
