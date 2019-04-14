// A^B mod c问题
// 第一次做，网上抄的思路。
// 开始使用32位整数作为pow_mod函数的参数，WA了一次。后来想想这种中间过程中好像会超范围。
// 故改成了64位。
#include <iostream>
#include <cstdint>

int64_t pow_mod(int64_t n, int64_t p, int64_t mod) {
    int64_t res = 1;
    while (p) {
        if (p & 1)
            res = (res * n) % mod;
        n = (n * n) % mod;
        p >>= 1;
    }
    return res;
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int64_t n, p, mod;
            cin >> n >> p >> mod;
            cout << pow_mod(n, p, mod) << '\n';
        }
    }

    return 0;
}
