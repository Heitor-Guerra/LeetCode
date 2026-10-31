#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

int trim(string s) {
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != ' ') {
      return i;
    }
  }
  return s.length();
}

int main() {
  string s;
  cin >> s;
  int i = trim(s);

  bool isNegative = false;
  if (s[i] == '-') {
    isNegative = true;
    i++;
  } else if (s[i] == '+') {
    i++;
  }

  int value = 0;
  for (int j = i; j < s.length(); j++) {
    if (s[j] < '0' || s[j] > '9') {
      break;
    }

    int digit = s[j] - '0';
    if (isNegative) {
      value = (value == INT32_MIN / 10 && digit > 8) || (value < INT32_MIN / 10)
                  ? INT32_MIN
                  : value * 10 - digit;
    } else {
      value = (value == INT32_MAX / 10 && digit > 7) || (value > INT32_MAX / 10)
                  ? INT32_MAX
                  : value * 10 + digit;
    }
  }

  cout << value << endl;

  return 0;
}
