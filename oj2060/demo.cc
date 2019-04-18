// 英语直接劝退，题目基本看不懂。
#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        int n, a, b;
        while (t--) {
            cin >> n >> a >> b;
            if (n >= 6) {
                a += 27 + 8 * (n - 6);
            } else {
                for (int i = 0; i < n; ++i) {
                    a += 7 - i;
                }
            }

            if (a >= b) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}
