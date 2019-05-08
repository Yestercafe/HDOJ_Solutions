#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    while (cin >> t) {
        for (int n; t-- && cin >> n;) {
            for (int i = 1; i <= n; ++i) {
                for (int j = 1; j <= n; ++j) {
                    cout << i * j;
                    if (j != n) {
                        cout << ' ';
                    }
                }
                cout << '\n';
            }
        }
    }

    return 0;
}
