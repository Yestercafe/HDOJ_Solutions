#include <iostream>
#include <cstdint>

int64_t fibn[51];

int64_t fib(int64_t n) {
    if (n == 0) return fibn[0];
    if (n == 1) return fibn[1];
    else {
        if (!fibn[n]) {
            fibn[n] = fib(n - 1) + fib(n - 2);
        }
        return fibn[n];
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    for (auto& c: fibn) {
        c = 0;
    }
    fibn[1] = 1;

    int t;
    while (cin >> t) {
        while (t--) {
            int64_t a, b;
            cin >> a >> b;
            cout << fib(b - a + 1) << endl;
        }
    }

    return 0;
}
