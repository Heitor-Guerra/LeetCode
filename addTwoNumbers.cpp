#include <forward_list>
#include <iostream>

using namespace std;

int main() {
  forward_list<int> l1;
  forward_list<int> l2;

  int n1;
  int n2;
  cin >> n1 >> n2;

  int a;
  for (int i = 0; i < n1; i++) {
    cin >> a;
    l1.push_front(a);
  }
  for (int i = 0; i < n2; i++) {
    cin >> a;
    l2.push_front(a);
  }

  forward_list<int> result;
  int carry = 0;
  for (auto i1 = l1.begin(), i2 = l2.begin();
       i1 != l1.end() || i2 != l2.end() || carry;) {
    int a = 0, b = 0;
    if (i1 != l1.end()) {
      a = *i1;
      i1++;
    }
    if (i2 != l2.end()) {
      b = *i2;
      i2++;
    }
    result.push_front((a + b + carry) % 10);
    carry = (a + b + carry) / 10;
  }

  for (auto x : result) {
    cout << x;
  }
  cout << endl;

  return 0;
}
