// USACO 2020 January Contest, Bronze, Problem 1

#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);
  int n, k, currentLine = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    string currentWord;
    cin >> currentWord;
    if (currentWord.length() <= (k - currentLine)) {
      if (i == 0) {
        cout << currentWord;
      } else {
        cout << " " << currentWord;
      }

      currentLine += currentWord.length();
    } else {
      cout << endl << currentWord;
      currentLine = currentWord.length();
    }
  }
}