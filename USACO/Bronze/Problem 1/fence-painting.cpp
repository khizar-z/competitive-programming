// USACO 2015 December Contest, Bronze, Problem 1

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("paint.in", "r", stdin);
  freopen("paint.out", "w", stdout);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (c > b || a > d) {
    cout << (b - a) + (d - c);
    return 0;
  }
  int lowerBound = min(a, c);
  int upperBound = max(b, d);
  cout << upperBound - lowerBound;
}