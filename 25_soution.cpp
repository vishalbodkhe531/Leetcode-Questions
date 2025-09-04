#include <iostream>
using namespace std;

bool linearSearch(int arr[][3], int no) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (arr[i][j] == no) return true;
    }
  }
  return false;
}

int main() {
  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  cout << linearSearch(arr, 93);
  return 0;
}