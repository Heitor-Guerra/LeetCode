#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, p;
  cin >> s >> p;

  int indexS = 0;
  for (int i = 0; i < p.length(); i++) {
    char c = p[i];
    char cNext = i + 1 < p.length() ? p[i + 1] : '.';

    if (cNext == '*') {
      if (c == '.') {
        if (i + 2 >= p.length()) {
          cout << true << endl;
          return 0;
        }

        char nextNext = p[i + 2];
        while (indexS < p.length() && s[indexS] != nextNext) {
          indexS++;
        }
        if (indexS == p.length()) {
          cout << false << endl;
          return 0;
        }

      } else {
        while (indexS < p.length() && s[indexS] == c) {
          indexS++;
        }
      }
      i++;
    } else {
      char cs = s[indexS];
      if ((c == '.' && (cs < 'a' || cs > 'z') && (cs < 'A' || cs > 'Z')) ||
          (c != '.' && cs != c)) {
        cout << false << endl;
        return 0;
      }
      indexS++;
    }
  }
  cout << (indexS == s.length()) << endl;

  return 0;
}
