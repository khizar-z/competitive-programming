// USACO 2017 US Open Contest, Bronze, Problem 2

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  vector<string> spotties(n);
  for (int i = 0; i < n; i++) {
    cin >> spotties[i];
  }
  vector<string> plains(n);
  for (int i = 0; i < n; i++) {
    cin >> plains[i];
  }
  int perfectPositions = 0;
  for (int p = 0; p < m; p++) {
    bool match = true;
    for (int i = 0; i < n; i++) {
      if (match == false) break;
      for (int j = 0; j < n; j++) {
        if (spotties[i][p] == plains[j][p]) {
          match = false;
          break;
        }
      }
    }
    perfectPositions += match;
  }
  cout << perfectPositions;
}

// good work
// stupid monkey watch for dumb mistakes
