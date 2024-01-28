// CCC '15 S1

#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, currentNum;
  vector<int> list;
  cin >> k;
  for (int i = 0; i < k; i++) {
    cin >> currentNum;
    if (currentNum == 0) {
      list.pop_back();
    } else {
      list.push_back(currentNum);
    }
  }
  int ans = 0;
  for (int i = 0; i < list.size(); i++) {
    ans += list[i];
  }
  cout << ans;
}
