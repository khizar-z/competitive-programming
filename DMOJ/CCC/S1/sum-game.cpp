// CCC '17 S1

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> swifts(n), semaphores(n);
  for (int i = 0; i < n; i++) {
    cin >> swifts[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> semaphores[i];
  }
  int k = 0, swiftTotal = 0, semTotal = 0;
  for (int i = 0; i < n; i++) {
    swiftTotal += swifts[i];
    semTotal += semaphores[i];
    if (swiftTotal == semTotal) {
      k = i + 1;
    }
  }
  cout << k;
}