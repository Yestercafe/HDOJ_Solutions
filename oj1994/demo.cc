#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        double y, e, f, g;
        int q;
        while (t--) {
            cin >> y >> q >> e >> f >> g;
            cout << fixed << setprecision(1);
            cout << (y * (1 + e / 100 * q / 365)) * (1 + g / 100) << '\n';
            cout << y * (1 + f / 100 * (q + 365) / 365) << '\n';
        }
    }

    return 0;
}
