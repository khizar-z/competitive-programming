// CCC '21 S1

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<double> widths(n), heights(n+1);
  double totalArea = 0;
  for (int i = 0; i < (n + 1); i++) {
    cin >> heights[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> widths[i];
  }
  for (int i = 0; i < n; i++) {
    totalArea += widths[i] * (heights[i] + heights[i + 1]) / 2;
  }
  cout << fixed << totalArea;
}