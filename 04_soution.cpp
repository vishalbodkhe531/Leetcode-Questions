#include <iostream>
using namespace std;

int main() {
  string str = "madam";
  bool isPalimdrom = false;

  for (int i = 0; i < str.length() / 2; i++) {
    if ((str[i] == (str[str.length() - i - 1]))) {
      isPalimdrom = true;
    } else {
      isPalimdrom = false;
      break;
    }
  }

  cout << "Ans is palimdrom or not is : " << isPalimdrom;

  return 0;
}