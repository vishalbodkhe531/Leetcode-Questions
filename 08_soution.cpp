#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
  int arr[] = {1, 2, 2, 3, 4, 4};
  vector<int> vec;

  unordered_set<int> container;

  for (int i : arr) {
    if (container.find(arr[i]) == container.end()) {
      container.insert(arr[i]);
      vec.push_back(arr[i]);
    }
  }

  for (int i : vec) {
    cout << i << " ";
  }

  return 0;
}
