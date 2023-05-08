// USACO 2019 January Contest, Silver, Problem 1

#include <bits/stdc++.h>

using namespace std;

int main() {
   int n; cin >> n;
   
   vector<int> deg(n + 1);
   for (int p = 0; p < n - 1; p++) {
      int a, b;
      cin >> a >> b;
      deg[a]++;
      deg[b]++;
   }

   int maxDeg = 0;
   for (int i = 1; i < n; i++) {
      maxDeg = max(maxDeg, deg[i]);
   }
   cout << maxDeg + 1;
}