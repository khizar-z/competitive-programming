// CCC '17 S2

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> measurements(n);
  for (int i = 0; i < n; i++) {
    cin >> measurements[i];
  }
  sort(measurements.begin(), measurements.end());
  vector<int> highTides, lowTides;
  if (n % 2 == 0) { 
    for (int i = 1; i < n+1; i++) {
      if (i <= (n/2)) {
        lowTides.push_back(measurements[i - 1]);
      } else {
        highTides.push_back(measurements[i - 1]);
      }
    }
    reverse(lowTides.begin(), lowTides.end());
    for (int i = 0; i < n / 2; i++) {
      cout << lowTides[i] << " ";
      if (i == (n/2)-1) {
        cout << highTides[i];
      } else {
        cout << highTides[i] << " ";
      }
    }
  } else if (n == 3) {
    cout << measurements[1] << " " << measurements[2] << " " << measurements[0];
  } else if (n == 1) {
    cout << measurements[0];
  } else {
    for (int i = 1; i < n+1; i++) {
      if (i <= (n/2)+1) {
        lowTides.push_back(measurements[i - 1]);
      } else {
        highTides.push_back(measurements[i - 1]);
      }
    }
    reverse(lowTides.begin(), lowTides.end());
    for (int i = 0; i < highTides.size(); i++) {
      cout << lowTides[i] << " ";
      cout << highTides[i] << " ";
      if (i == highTides.size() - 1) {
        cout << lowTides[i + 1];
      }
    }
  }

}