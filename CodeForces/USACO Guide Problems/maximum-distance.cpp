#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> y[i];
  }
  int maxDist;
  for (int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      int distX = x[i] - x[j];
      int distY = y[i] - y[j];
      int distance = distX * distX + distY * distY;
      maxDist = max(distance, maxDist);
    }
  }
  cout << maxDist;
}