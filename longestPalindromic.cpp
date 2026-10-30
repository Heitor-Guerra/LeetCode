#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int init = 0;
  int length = 0;

  for (int i = 0; i < s.length(); i++) {
    int odd = 0;
    bool oddC = true;
    int even = 0;
    bool evenC = true;

    // Test odd and even palindromic
    int j = 0;
    while (i - j >= 0 && (oddC || evenC)) {
      if (oddC && i + j < s.length() && s[i + j] == s[i - j]) {
        odd++;
      } else {
        oddC = false;
      }
      if (evenC && i + j + 1 < s.length() && s[i + j + 1] == s[i - j]) {
        even++;
      } else {
        evenC = false;
      }
      j++;
    }

    if (2 * even > length) {
      length = 2 * even;
      init = i - even + 1;
    }

    if (2 * odd - 1 > length) {
      length = 2 * odd - 1;
      init = i - odd + 1;
    }
  }

  cout << s.substr(init, length) << endl;

  return 0;
}
