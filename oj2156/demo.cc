#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;

        double ans = double(n);
        for (int m = 2, c = (n - 1) * 2; m <= n && c >= 2; ++m, c -= 2) {
            ans += double(c) / m;
        }

        cout << fixed << setprecision(2) << ans << '\n';
    }

    return 0;
}
