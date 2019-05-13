#include <iostream>
#include <cstdint>
using ll = int64_t;

ll lst[35] = {1};

static void init() {
    for (int i = 1; i < 33; ++i) {
        lst[i] = 2ll * lst[i - 1];
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    init();

    int t;
    while (cin >> t) {
        while (t--) {
            int a;
            cin >> a;
            cout << lst[a] - 1 << '\n';
        }
    }

    return 0;
}
