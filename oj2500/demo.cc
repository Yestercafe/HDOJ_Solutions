#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            for (int i = 0; i < 3 * n; ++i) {
                for (int j = 0; j < n; ++j) {
                    cout << "HDU";
                }
                cout << '\n';
            }
        }
    }

    return 0;
}
