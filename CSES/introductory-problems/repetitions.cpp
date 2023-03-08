#include <iostream>
#include <string>
using namespace std;

int main() {
    string sequence;
    cin >> sequence;
    int n = sequence.length(), best = 0, curr = 1;
    for (int i = 1; i < n; i++) {
        if (sequence[i] != sequence[i - 1])
        {
            best = max(best, curr);
            curr = 0;
        }
        curr++;
    }
    best = max(best, curr);
    cout << best;
    return 0;
}
/*
#include <iostream>/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  string sequence;
  cin >> sequence;
  int aLongest = 0;
  int cLongest = 0;
  int gLongest = 0;
  int tLongest = 0;
  for (int i = 0; i <= sequence.size(); i++) {
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
  cout << finalNumbers[3];
}
*/