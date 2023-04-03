// USACO 2017 January Contest, Bronze, Problem 1

#include <bits/stdc++.h>

using namespace std;

const int cowNum = 7;

int main() {
  //freopen("notlast.in", "r", stdin);
  //freopen("notlast.out", "w", stdout);
  int n;
  cin >> n;

  map<string, int> raw;
  for (int i = 0; i < n; i++) {
    string a;
    int b;
    cin >> a >> b;
    raw[a] += b;
  } 

  vector<pair<int, string>> cows;
  for (pair<string, int> t : raw) {
    cows.push_back({t.second, t.first});
  }

  int ind = 0;
  if (cows.size() == cowNum) {
    while (ind < cows.size() && cows[ind].first == cows[0].first) { ind++; }
  }

  if (ind < cows.size() && (ind + 1 == cows.size() || cows[ind].first != cows[ind + 1].first)) {
    cout << cows[ind].second << "\n";
  } else {
    cout << "Tie" << "\n";
  }
}