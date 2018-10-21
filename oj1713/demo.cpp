#include <iostream>
#include <cstdint>

static int64_t gcd(int64_t n, int64_t m) {
    return m > 0 ? gcd(m, n % m) : n;
}

static int64_t lcm(int64_t a, int64_t b) {
    return a / gcd(a, b) * b;
}

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int64_t c1, t1, c2, t2;
    while (--n >= 0) {
        cin >> c1 >> t1 >> c2 >> t2;
        cout <<  << endl;
    }

    return 0;
}
