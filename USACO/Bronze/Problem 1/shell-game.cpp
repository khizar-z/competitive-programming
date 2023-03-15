// USACO 2019 January Contest, Bronze, Problem 1

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("shell.in", "r", stdin);
  int n;
  cin >> n;
  vector<int> shellPosition(3);
  for (int i = 0; i < 3; i++) {
    shellPosition[i] = i;
  }
  vector<int> counter(3);
  for (int i = 0; i < n; i++) {
    int a, b, g;
    cin >> a >> b >> g;
    a--,  b--, g--;
    swap(shellPosition[a], shellPosition[b]);
    counter[shellPosition[g]]++;
  }
  freopen("shell.out", "w", stdout);
  cout << max({counter[0], counter[1], counter[2]});
}