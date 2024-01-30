// CCC '20 S1

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; cin >> n;
  vector<tuple<double, double>> positions;
  for (int i = 0; i < n; i++) {
    long long int t, x; cin >> t >> x;
    positions.push_back(make_tuple(t, x));
  }
  sort(positions.begin(), positions.end());
  double maxSpeed = 0;
  for (int i = 0; i < positions.size(); i++) {
    if (i == positions.size() - 1) break;
    double speed = abs((get<1>(positions[i + 1]) - get<1>(positions[i])) / (get<0>(positions[i + 1]) - get<0>(positions[i])));
    maxSpeed = max(speed, maxSpeed);
  }
  cout << fixed << setprecision(1) << maxSpeed;
}