// USACO 2015 December Contest, Bronze, Problem 2

# include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
  int n, m;
  cin >> n >> m;
  vector<int> roadLengths(100), bessieSegments(100);
  int roadLength;
  int previousLength = 0;
  for (int i = 0; i < n; i++) {
    int currentSpeed;
    cin >> roadLength >> currentSpeed;
    fill(begin(roadLengths) + previousLength, begin(roadLengths) + previousLength + roadLength, currentSpeed);
    previousLength += roadLength;
  }

  int bessieRoadLength;
  int bessiePreviousLength = 0;
  for (int i = 0; i < m; i++) {
    int currentSpeed;
    cin >> bessieRoadLength >> currentSpeed;
    fill(begin(bessieSegments) + bessiePreviousLength, begin(bessieSegments) + bessiePreviousLength + bessieRoadLength, currentSpeed);
    bessiePreviousLength += bessieRoadLength;
  }

  int highestInfraction = 0;
  for (int i = 0; i < roadLengths.size(); i++) {
    if (bessieSegments[i] > roadLengths[i]) {
      int newHighest = max(highestInfraction, bessieSegments[i] - roadLengths[i]);
      highestInfraction = newHighest;
    }
  }

  cout << highestInfraction;
}

// All by yourself, and the internal solution is really close to what you did! Same logic!
// Please become good at this