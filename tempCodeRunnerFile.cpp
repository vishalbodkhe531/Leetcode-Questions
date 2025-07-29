// #include <iostream>
// using namespace std;

// int main() {
//   int arr[5] = {1, 2, 3, 4, 5};

//   int length = sizeof(arr) / sizeof(arr[0]);

//   for (int i = 0; i < length; i++) {
//     for (int j = i; j < length; j++) {
//       int sum = 0;
//       for (int k = i; k < j; k++) {
//         cout << arr[k];
//         sum += arr[k];
//       }
//       sum == 0 ? cout << "" : cout << " = " << sum << endl;
//     }
//     cout << endl;
//   }

//   return 0;
// }

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int maxSum = INT_MIN;

  int length = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < length; i++) {
    int currentSum = 0;
    for (int j = i; j < length; j++) {
      currentSum += arr[j];
      maxSum = max(currentSum, maxSum);
    }
  }

  cout << maxSum;

  return 0;
}
