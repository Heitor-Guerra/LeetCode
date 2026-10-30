#include <cstdint>
#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  int res = 0;
  while (x != 0) {
    int digit = x % 10;
    if ((res > INT32_MAX / 10 || res == INT32_MAX / 10 && digit > 7) ||
        (res < INT32_MIN / 10 || res == INT32_MIN / 10 && digit > 8)) {
      res = 0;
      break;
    }
    res = res * 10 + digit;
    x /= 10;
  }

  cout << res << endl;

  return 0;
}
