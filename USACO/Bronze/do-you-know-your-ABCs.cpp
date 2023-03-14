#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  vector<int> numbers;
  for (int i = 0; i < 7; i++) {
  long long int input;
  cin >> input;
  numbers.push_back(input);
  }

  sort(numbers.begin(), numbers.end());
  cout << numbers[0] << " " << numbers[1] << " " << (numbers.back() - numbers[0] - numbers[1]);
}

// The first USACO Bronze you solved on your own. It's stupidly easy, but you were happy.
// Where are you now?