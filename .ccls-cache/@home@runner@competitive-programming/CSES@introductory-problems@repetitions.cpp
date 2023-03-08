#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string sequence;
  cin >> sequence;
  int aLongest, cLongest, gLongest, tLongest;
  for (int i = 0; i < sequence.size(); i++) {
    if (sequence[i] == sequence[i + 1]) {
      switch(sequence[i]) {
        case 'A':
          aLongest++;
        case 'C':
          cLongest++;
        case 'G':
          gLongest++;
        case 'T':
          tLongest++;
      }
    }
  }
  vector<int> finalNumbers;
  finalNumbers.push_back(aLongest);
  finalNumbers.push_back(cLongest);
  finalNumbers.push_back(gLongest);
  finalNumbers.push_back(tLongest);
  sort(finalNumbers.begin(), finalNumbers.end());
  cout << finalNumbers[0];
}