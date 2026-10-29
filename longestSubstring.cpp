#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main() {
  string s;
  cin >> s;

  int beg = 0, end = 0;
  unordered_map<char, bool> isPresent;
  int n = 0;
  while(end < s.length()) {
    if(isPresent[s[end]]) {
      isPresent[s[beg]] = false;
      beg++;
    } else {
      isPresent[s[end]] = true;
      end++;
    }

    if(end - beg > n) {
      n = end - beg;
    }
  }
  cout << n << endl;

  return 0;
}
