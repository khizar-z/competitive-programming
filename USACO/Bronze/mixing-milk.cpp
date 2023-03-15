// USACO 2018 December Contest, Bronze, Problem 1

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("mixmilk.in", "r", stdin);
  vector<int> amounts(3);
  vector<int> capacities(3);
  for (int i = 0; i < 3; i++) {
    int capacityInput;
    cin >> capacityInput;
    capacities[i] = capacityInput;
    int amountInput;
    cin >> amountInput;
    amounts[i] = amountInput;
  }
  for (int i = 0; i < 100; i++) {
    int bucket1 = i % 3;
    int bucket2 = (i + 1) % 3;
    int amount = min(amounts[bucket1], capacities[bucket2] - amounts[bucket2]);
    amounts[bucket1] -= amount;
    amounts[bucket2] += amount;
  }
  freopen("mixmilk.out", "w", stdout);
  for (int a : amounts) {
    cout << a << '\n';
  }
}