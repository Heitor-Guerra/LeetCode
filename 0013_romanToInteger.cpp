#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  map<char, int> dict = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50},
                         {'X', 10},   {'V', 5},   {'I', 1}};

  int x = 0;
  for (int i = 0; i < s.length(); i++) {
    int v1 = dict[s[i]];
    int v2 = i + 1 < s.length() ? dict[s[i + 1]] : 0;

    if (i + 1 < s.length() && v2 > v1) {
      x += v2 - v1;
      i++;
    } else {
      x += v1;
    }
  }

  cout << x << endl;
  return 0;
}
