#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n % 4 == 0) {
    vector<int> a, b;
    for (int i = 1; i < n+1; i++) {
      if (i % 4 == 1 || i % 4 == 0) a.push_back(i);
      else b.push_back(i);
    }
    cout << "YES" << endl;
    cout << a.size() << endl;
    for (auto i: a) cout << i << " "; cout << endl;
    cout << b.size() << endl;
    for (auto i: b) cout << i << " "; cout << endl;
  } else if (n % 4 == 3) {
    vector<int> a, b;
    for (int i = 1; i < n; i++) {
      if (i % 4 == 1 || i % 4 == 2) a.push_back(i);
      else b.push_back(i);
    }
    b.push_back(n);
    cout << "YES" << endl;
    cout << a.size() << endl;
    for (auto i: a) cout << i << " "; cout << endl;
    cout << b.size() << endl;
    for (auto i: b) cout << i << " "; cout << endl;
  }
  else cout << "NO";
}