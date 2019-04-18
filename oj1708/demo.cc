#include <iostream>
#include <cstdint>

uint64_t powp3(const uint64_t &n) {
    return n * n * n;
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            uint64_t a;
            cin >> a;
            cout << powp3(a) << ' ' << powp3(a + 1) << '\n';
        }
    }

    return 0;
}
