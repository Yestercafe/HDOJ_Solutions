#include <bits/stdc++.h>
using namespace std;

static bool isLeapYear(const int yr) {
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int yr, mn, dy;
            scanf("%d-%d-%d", &yr, &mn, &dy);
            if (mn == 2 and dy == 29) {
                cout << "-1\n";
                continue;
            }

            int ct = 365 * 18;
            int st = yr;
            if (!(mn <= 2 && dy <= 28)) {
                ++st;
            }

            for (int i = 0; i < 18; ++i, ++st) {
                if (isLeapYear(st)) {
                    ++ct;
                }
            }

            cout << ct << endl;
        }
    }

    return 0;
}