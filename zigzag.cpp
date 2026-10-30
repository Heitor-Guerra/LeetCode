#include <iostream>
#include <string>
#include <vector>

using namespace std;

int calculateSpaces(int n) {
  if (n <= 1)
    return n;
  return 2 * n - 3;
}

int main() {
  string s;
  int numRows;
  cin >> s >> numRows;

  if (numRows == 1 || numRows >= s.length()) {
    cout << s << endl;
    return 0;
  }

  vector<string> layers(numRows, "");
  int layer = 0;
  int rising = 1;
  for (char c : s) {
    layers[layer].push_back(c);

    if (layer == 0) {
      rising = 1;
    } else if (layer == numRows - 1) {
      rising = -1;
    }

    layer += rising;
  }

  string res = "";
  for (string str : layers) {
    res.append(str);
  }

  cout << res << endl;
  return 0;
}
