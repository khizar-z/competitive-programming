#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    long int x, y;
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        if (x < y)
        {
            if (y % 2 == 1)
            {
                long int r = y * y;
                cout << r - x + 1 << endl;
            }
            else
            {
                long int r = (y - 1) * (y - 1) + 1;
                cout << r + x - 1 << endl;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                long int r = x * x;
                cout << r - y + 1 << endl;
            }
            else
            {
                long int r = (x - 1) * (x - 1) + 1;
                cout << r + y - 1 << endl;
            }
        }
    }
    return 0;
}

// I'm not quite sure how the hell anyone
// is supposed to find this shit in a contest.
// What the fuck.