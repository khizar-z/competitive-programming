#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, input, sum = 0;
    cin >> n;

    for (int i = 0 ; i < n - 1 ; i++) {
        cin >> input;
        sum += input;
    }
    cout << ( n * (n + 1) ) / 2 - sum << endl;
}

/*
Attempted solution

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  long long int n;
  vector<int> nums;
  int curnum;
  cin >> n;
  for (int i = 0; i < n - 1; i++) {
    cin >> curnum;
    nums.push_back(curnum);
  };
  sort(nums.begin(), nums.end());
  for (long long int i = 0; i < nums.size(); i++) {
    if ((i + 1) != nums[i]) {
      cout << i + 1;
      break;
    };
  };
};
*/