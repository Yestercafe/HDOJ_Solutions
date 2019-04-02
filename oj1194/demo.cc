#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        int s, d;
        int a, b;
        while (t--) {
            cin >> s >> d;
            a = (s + d) / 2;
            b = s - a;
            if ((s + d) % 2 != 0 || b < 0) {
                cout << "impossible" << '\n';
            } else {
                cout << max(a, b) << " " << min(a, b) << '\n';
            }
        }
    }

    return 0;
}
