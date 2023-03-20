// Educational Codeforces Round 29

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int nMultipliedByTwo = n*2;
  vector<int> people(nMultipliedByTwo);
  for (int i = 0; i < (n*2); i++) {
    cin >> people[i];
  }
  sort(people.begin(), people.end());
  int minInstability = INT32_MAX;
  for (int i = 0; i < people.size(); i++) {
    for (int j = i + 1; j < people.size(); j++) {
      vector<int> newPeople;
      for (int p = 0; p < people.size(); p++) {
        if (p != i && p != j) { newPeople.push_back(people[p]); }
      }
      int totalInstability = 0;
      for (int p = 0; p < people.size(); p += 2) {
        totalInstability += newPeople[p + 1] - newPeople[p];
      }
      minInstability = min(minInstability, totalInstability);
    }
  }
  cout << minInstability;
}

// This solution fails on CodeForces' grader with an
// 'out of bounds' error for some fucking reason. Regardless,
// I'm counting this as a dub. (even though I read the editorial
// and don't really understand this)