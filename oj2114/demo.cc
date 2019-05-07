#include <cstdio>
using ll = long long;

int main()
{
    ll n;
    while (~scanf("%lld", &n)) {
        ll ans = 1;
        if (n % 2) {
            ans *= (n + 1) / 2;
            ans %= 10000;
            ans *= (n + 1) / 2;
            ans %= 10000;
            ans *= n;
            ans %= 10000;
            ans *= n;
            ans %= 10000;
        } else {
            ans *= n / 2;
            ans %= 10000;
            ans *= n / 2;
            ans %= 10000;
            ans *= n + 1;
            ans %= 10000;
            ans *= n + 1;
            ans %= 10000;
        }
        printf("%.4lld\n", ans);
    }

    return 0;
}
