#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int m, n;
            cin >> m >> n;
            int64_t punishment = 0;
            int64_t step = 1;
            while (n--) {
                int isBoy;
                cin >> isBoy;
                if (m <= 0) {
                    punishment += step;
                    step *= 2;
                }
                if (isBoy) {
                    m = 0;
                }
                --m;
            }

            if (punishment == 0) {
                cout << 0;
            } else {
                cout << punishment << "0000";
            }
            cout << " RMB\n";
        }
    }

    return 0;
}