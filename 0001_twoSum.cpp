#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  vector<int> num;
  int target;

  int n;

  cin >> target >> n;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    num.push_back(a);
  }

  int i1;
  int i2;

  map<int, int> indexes;
  for (int i = 0; i < num.size(); i++) {
    if (indexes.contains(num[i])) {
      i1 = i;
      i2 = indexes[num[i]];
      break;
    }
    indexes.insert({target - num[i], i});
  }

  cout << i1 << " " << i2;

  return 0;
}
