// USACO 2016 December Contest, Bronze, Problem 2

#include <bits/stdc++.h>

using namespace std;

vector<int> count_freq(string s) {
	vector<int> freq(26);
	for (char c : s) { freq[c - 'a']++; }
	return freq;
}

int main() {
  int n;
  cin >> n;
  vector<pair<string, string>> words(n);
  for (auto &[w1, w2] : words) {
    cin >> w1 >> w2;
  }
  vector<int> max_blocks(26);
  for (const auto &[w1, w2] : words) {
    vector<int> freq1 = count_freq(w1);
    vector<int> freq2 = count_freq(w2);
    for (int i = 0; i < 26; i++) {
      max_blocks[i] += max(freq1[i], freq2[i]);
    }
  }
  for (int i : max_blocks) {
    cout << i << endl;
  }
}

// Upsolved after usaco.guide editorial