#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> height(n);
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  int largest = 0;
  int left = 0;
  int right = height.size() - 1;
  while (left < right) {
    int val = (right - left) * (min(height[left], height[right]));
    if (val > largest)
      largest = val;
    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }

  // for (int i = 0; i < height.size(); i++) {
  //   for (int j = i; j < height.size(); j++) {
  //     int val = (j - i) * (min(height[i], height[j]));
  //     if (val > largest)
  //       largest = val;
  //   }
  // }

  cout << largest << endl;

  return 0;
}
