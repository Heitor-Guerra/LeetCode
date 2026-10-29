#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums1(n);
  for (int i = 0; i < n; i++) {
    cin >> nums1[i];
  }
  cin >> n;
  vector<int> nums2(n);
  for (int i = 0; i < n; i++) {
    cin >> nums2[i];
  }

  int last = 0;
  int current = 0;
  int i1 = 0, i2 = 0;

  while (i1 + i2 <= (nums1.size() + nums2.size()) / 2) {
    last = current;
    if (i1 >= nums1.size()) {
      current = nums2[i2];
      i2++;
    } else if (i2 >= nums2.size()) {
      current = nums1[i1];
      i1++;
    } else if (nums1[i1] > nums2[i2]) {
      current = nums2[i2];
      i2++;
    } else {
      current = nums1[i1];
      i1++;
    }
  }
  double res =
      (nums1.size() + nums2.size()) % 2 == 0 ? (last + current) / 2.0 : current;

  cout << res << endl;
  return 0;
}
