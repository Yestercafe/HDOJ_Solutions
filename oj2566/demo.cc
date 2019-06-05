#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int n, m;
            cin >> n >> m;
            int count = 0;
            for (int a5 = 0; a5 * 5 <= m && a5 <= n; ++a5) {
                for (int a2 = 0; a5 * 5 + a2 * 2 <= m && a2 + a5 <= n; ++a2) {
                    if (a5 * 5 + a2 * 2 + n - a5 - a2 == m) {
                        ++count;
                    }
                }
            }
            cout << count << '\n';
        }
    }
    return 0;
}