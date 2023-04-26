// Lyndon's Golf Contest 1 P8 - Beautiful Brackets
// ACed, but no points - problem wants funny ultra-short (under 70 bytes) solution:
// n;main(c){for(;c<=(c=getchar());n+=2*c-81);puts(c>10|n?"NO":"YES");}

#include <bits/stdc++.h>

using namespace std;

int main() {
  string brackets;
  cin >> brackets;

  int numOpen = 0, numClose = 0;
  int lastOpenPos = 0, firstClosePos = 101;
  for (int i = 0; i < brackets.size(); i++) {
    if (brackets[i] == '(') {
      if (i > lastOpenPos) {
        lastOpenPos = i;
      }
      numOpen++;
    } else {
      numClose++;
      if (i < firstClosePos) {
        firstClosePos = i;
      }
    }
  }

  if ((numOpen == numClose) && (lastOpenPos < firstClosePos)) {
    cout << "YES" << "\n";
  } else {
    cout << "NO" << "\n";
  }
}