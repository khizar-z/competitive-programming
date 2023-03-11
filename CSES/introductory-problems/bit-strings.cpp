#include <iostream>
#include <math.h>

using namespace std;

int main() {
  long long int n, answer = 1;
  cin >> n;
  // cout << pow(2, n); Lmao you thought
  for (int i = 0; i < n; i++) {
    answer *= 2;
    answer %= 1000000007;
  }
  cout << answer;
}