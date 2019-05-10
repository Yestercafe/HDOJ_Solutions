#include <iostream>
#include <cstdint>
using ll = uint64_t;

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    while (cin >> n) {
        ll sum = 0;
        sum += n * (n + 1) / 2 * (2 * n + 1) / 3;

        auto div = n / 2;
        sum -= 2 * div * (div + 1) * (2 * div + 1) / 3;

        cout << sum << '\n';
    }

    return 0;
}
