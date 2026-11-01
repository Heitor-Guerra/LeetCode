#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> strs(n);
  for (int i = 0; i < n; i++) {
    cin >> strs[i];
  }

  string s = "";
  for (int i = 0; i < strs[0].length(); i++) {
    char c = strs[0][i];
    for (string str : strs) {
      if (str[i] != c) {
        cout << s << endl;
        return 0;
      }
    }
    s.push_back(c);
  }

  cout << s << endl;

  return 0;
}
