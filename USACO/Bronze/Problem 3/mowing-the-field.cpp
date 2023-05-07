// USACO 2016 January Contest, Bronze, Problem 3

// Passed all but test case 3, which produces runtime error or MLE
// that's racist
// the internal sol uses a hashmap and pairs instead of arbitrarily large vector

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  freopen("mowing.in", "r", stdin);
	freopen("mowing.out", "w", stdout);
  int n;
  cin >> n;
  vector<vector<int>> farm(1000, vector<int>(1000, -1));
  farm[500][500] = 0;
  int currentX = 500, currentY = 500, time = 0, x = -1;
  for (int i = 0; i < n; i++) {
    char direction; int steps;
    cin >> direction >> steps;
    for (int j = 0; j < steps; j++) {
      if (direction == 'N') {
        currentY++;
      } else if (direction == 'S') {
        currentY--;
      } else if (direction == 'W') {
        currentX--;
      } else if (direction == 'E') {
        currentX++;
      }
      time++;
      if (farm[currentX][currentY] != -1) {
        if (x == -1) {
          x = time - farm[currentX][currentY];
        } else {
          x = min(x, (time - farm[currentX][currentY]));
        }
      }
      farm[currentX][currentY] = time;
    }
  }
  cout << x;
}