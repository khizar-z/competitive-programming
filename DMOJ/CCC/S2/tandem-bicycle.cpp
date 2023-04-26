// CCC '16 S2

#include <bits/stdc++.h>

using namespace std;

int main() {
  int probType, n;
  cin >> probType >> n;
  vector<int> dmojistan(n), pegland(n);
  for (int i = 0; i < n; i++) {
    cin >> dmojistan[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> pegland[i];
  }
  
  vector<int> final(n);
  sort(dmojistan.begin(), dmojistan.end());
  sort(pegland.begin(), pegland.end());
  if (probType == 1) {
    for (int i = 0; i < n; i++) {
      final[i] = max(dmojistan[i], pegland[i]);
    }
  } else if (probType == 2) {
    for (int i = 0; i < n; i++) {
      final[i] = max(dmojistan[i], pegland[n - (i + 1)]);
    }
  }
  cout << accumulate(final.begin(), final.end(), 0) << "\n";
}