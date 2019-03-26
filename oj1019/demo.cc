#include <iostream>

static unsigned gcd(const unsigned a, const unsigned b) {
    return (b > 0) ? gcd(b, a % b) : a;
}

static unsigned lcm(const unsigned a, const unsigned b) {
    return a / gcd(a, b) * b;
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        while (n--) {
            int t, lcms = 1;
            cin >> t;
            for (int i = 0; i < t; ++i) {
                int k;
                cin >> k;
                lcms = lcm(lcms, k);
            }
            cout << lcms << endl;
        }
    }

    return 0;
}
