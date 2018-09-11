#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, m;
    int res = 0;
    while (cin >> n >> m) {
        for (int i = 2; i <= n * 2; i += 2) {
            res += i;
            if ((i / 2) % m == 0) {
                res /= m;
                cout << res;
                res = 0;
                if (i == n * 2) cout << endl;
                else cout << ' ';
            }
        }
        if (res) {
            res /= n % m;
            cout << res << endl;
            res = 0;
        }
    }
    return 0;
}
