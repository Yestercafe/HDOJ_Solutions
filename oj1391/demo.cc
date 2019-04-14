#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int x, y;
            cin >> x >> y;
            if (x == y && x % 2 == 1) {
                cout << 2 * x - 1 << '\n';
            } else if (x == y && x % 2 == 0) {
                cout << 2 * x << '\n';
            } else if (x - 1 == y + 1 && (x - 1) % 2 == 1) {
                cout << 2 * (x - 1) << '\n';
            } else if (x - 1 == y + 1 && (x - 1) % 2 == 0) {
                cout << 2 * (x - 1) - 1 << '\n';
            } else {
                cout << "No Number\n";
            }
        }
    }

    return 0;
}
