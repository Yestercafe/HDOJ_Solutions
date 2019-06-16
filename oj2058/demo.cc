#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;

        for (int div = sqrt(2 * m); div >= 0; --div) {   // 这个剪枝简直了...
            double mid = double(m) / div;
            if (div & 1) {
                if (mid == floor(mid)) {
                    int lower = int(mid) - div / 2;
                    int upper = int(mid) + div / 2;
                    if (lower > 0 and upper <= n) {
                        cout << "[" << lower << "," << upper << "]\n";
                    }
                }
            } else {
                if (mid - floor(mid) == .5) {
                    int lower = int(floor(mid)) - div / 2 + 1;
                    int upper = int(floor(mid)) + div / 2 + 0;
                    if (lower > 0 and upper <= n) {
                        cout << "[" << lower << "," << upper << "]\n";
                    }
                }
            }
        }
        cout << '\n';
    }
    return 0;
}