#include <iostream>

using namespace std;
int main() {
  int x;
  cin >> x;

  if (x < 0) {
    cout << false << endl;
    return 0;
  }

  int temp = x;
  int reverse = 0;
  while (temp > 0) {
    reverse = reverse * 10 + (temp % 10);
    temp /= 10;
  }
  cout << (reverse == x) << endl;
  return 0;
}
