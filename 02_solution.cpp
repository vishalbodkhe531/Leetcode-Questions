#include <climits>
#include <iostream>
using namespace std;

int main() {
  int number = 123;
  long long store = 0;
  while (number > 0) {
    int rem = number % 10;
    store = (store * 10) + rem;
    number = number / 10;
    if (store > INT_MAX || store < INT_MIN) return 0;
  }
  cout << store;

  return 0;
}