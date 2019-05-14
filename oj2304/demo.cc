#include <iostream>
#include <cstdint>
using namespace std;
using ll = int64_t;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            ll sum = 0ll;
            for (int _ = 0; _ < n; ++_) {
                ll in;
                cin >> in;
                sum += in;
            }
            sum -= n - 1;
            cout << sum << '\n';
        }
    }

    return 0;
}
