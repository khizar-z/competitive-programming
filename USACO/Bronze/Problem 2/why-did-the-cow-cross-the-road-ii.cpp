// USACO 2017 February Contest, Bronze, Problem 2

#include <bits/stdc++.h>

using namespace std;

int main() {
  string crossings;
  cin >> crossings;

  int crossingPairs = 0;
  for (int i = 0; i < crossings.size(); i++) {
    for (int j = i + 1; j < crossings.size(); j++) {
      for (int k = j + 1; k < crossings.size(); k++) {
        for (int l = k + 1; l < crossings.size(); l++) {
          crossingPairs += (crossings[i] == crossings[k] && crossings[j] == crossings[l]);
        }
      }
    }
  }

  cout << crossingPairs << endl;
}