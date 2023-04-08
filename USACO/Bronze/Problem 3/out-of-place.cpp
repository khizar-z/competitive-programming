// USACO 2018 January Contest, Bronze, Problem 3

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
  int n;
  cin >> n;
  vector<int> values(n), sorted(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i];
    sorted[i] = values[i];
  }
  sort(sorted.begin(), sorted.end());
  int swaps = 0;
  for (int i = 0; i < n; i++) {
    if (values[i] != sorted[i]) {
      swaps++;
    }
  }
  cout << swaps - 1 << "\n";
}