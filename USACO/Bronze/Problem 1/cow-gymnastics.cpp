// USACO 2019 December Contest, Bronze, Problem 1

#include <bits/stdc++.h>

using namespace std;

template <typename T> int index(const vector<T> &vec, const T &n) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == n) { return i; }
	}
	return -1;
}

int main() {
  int k, n;
  cin >> k >> n;
  vector<vector<int>> sessions(k);
  for (int i = 0; i < k; i++) {
    vector<int> rankings(n);
    for (int j = 0; j < n; j++) {
      cin >> rankings[j];
    }
    sessions[i] = rankings;
  }
  
  int betterPairs = 0;
  for (int c1 = 0; c1 < n; c1++) {
    for (int c2 = 0; c2 < n; c2++) {
      if (c1 == c2) continue;
      bool better = true;
      for (const vector<int> &s : sessions) {
        if (index(s, c1) < index(s, c2)) {
          better = false;
          break;
        }
      }
      betterPairs += better;
    }
  }
  cout << betterPairs;
}