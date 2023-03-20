// USACO 2019 December Contest, Bronze, Problem 2

#include <bits/stdc++.h>

using namespace std;

int n;
string s;

bool dups(int len) {
  set<string> x;
  for (int i = 0; i <= n; i++) {
    if (x.count(s.substr(i, len)) > 0) return true;
    x.insert(s.substr(i,len));
  }
  return false;
}

int main() {
 cin >> n >> s;
 int ans = 1;
 while (dups(ans)) ans++;
 cout << ans;
}