#include <bits/stdc++.h>

using namespace std;

int main() {
  long int n, current = 5, answer = 0;
  cin >> n;
  while (current <= n) {
    answer += n / current;
    current *= 5;
  }
  cout << answer << endl;
}