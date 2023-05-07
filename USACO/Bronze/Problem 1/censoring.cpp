// USACO 2015 February Contest, Bronze, Problem 1

#include <bits/stdc++.h>

using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  string censored;
  for (int i = 0; i < S.size(); i++) {
    censored += S[i];
    if (censored.size() > T.size() && censored.substr(censored.size() - T.size()) == T) {
      censored.resize(censored.size() - T.size());
    }
  }
  cout << censored;
}