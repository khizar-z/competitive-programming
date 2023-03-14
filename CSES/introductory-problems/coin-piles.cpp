#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        cout << ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO") << endl;
    }
}

/*

// FIRST DP SOLUTION YOU'VE EVER IMPLEMENTED ON YOUR OWN
// EXCEPT THE MONKEY GRADER WANTS THE GIMMICK SOLUTION
// ABOVE, ANY MEMOIZATION ATTEMPTS SEEM TO SEGFAULT
// UNIVERSE IS AGAINST ME

#include <bits/stdc++.h>

using namespace std;

bool solve(long long int a, long long int b) {
  if ((a - 2 == 0) && (b - 1 == 0)) return true;
  if ((a - 1 == 0) && (b - 2 == 0)) return true;
  if ((a <= 0) && (b > 0)) return false;
  if ((a > 0) && (b <= 0)) return false;
  return dp[a][b] = solve(a - 2, b - 1) || solve(b - 1, a - 2);
}

int main() {
  long long int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    if (solve(a, b)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}
*/