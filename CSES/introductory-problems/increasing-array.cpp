#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  long long int moves = 0;
  vector<int> integers;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    integers.push_back(input);
  };
  for (int i = 0; i < integers.size(); i++) {
    /* if ((i + 1) < n) {
      while (integers[i] > integers[i + 1]) {
        integers[i + 1]++;
        moves++;
      };
    } */
    if ((i + 1) < n) {
      if (integers[i] > integers[i + 1]) {
        moves += integers[i] - integers[i + 1];
        integers[i + 1] += integers[i] - integers[i + 1];
        // cout << "Move: " << moves << endl;
        // cout << "Integer " << i + 1 << ": " << integers[i + 1] << endl;
      };
    };
  };
  cout << moves;
};