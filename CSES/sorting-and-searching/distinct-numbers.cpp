#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> values(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i];
  }
  sort(values.begin(), values.end());
  int distinctValues = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      distinctValues++;
      continue;
    }
    if (values[i] != values[i - 1]) {
      distinctValues++;
    }
  }

  cout << distinctValues;
}