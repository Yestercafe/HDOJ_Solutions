#include <iostream>
#include <cstdint>
using namespace std;
using ll = int64_t;

ll pow2[64] = {1ll};

static void init()
{
    for (int i = 1; i < 64; ++i) {
        pow2[i] = 2 * pow2[i - 1];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();

    int n;
    while (cin >> n) {
        ll ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            ans += (i + 1) * pow2[i];
        }
        cout << ans << '\n';
    }

    return 0;
}
