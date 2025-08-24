#include <iostream>
using namespace std;

bool isValid(char ch) {
  if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
    return true;
  }
  return false;
}

int main() {
  string str = "A man, a plan, a canal: Panama";
  int startPtr = 0, endPtr = str.length() - 1;
  while (startPtr < endPtr) {
    if (!isValid(str[startPtr])) {
      startPtr++;
      continue;
    }

    if (!isValid(str[endPtr])) {
      endPtr--;
      continue;
    }

    if (tolower(str[startPtr]) != tolower(str[endPtr])) {
      cout << "Invalid String";
      return false;
    }
    startPtr++, endPtr--;
  }
  cout << "Valid String";
  return 0;
}
