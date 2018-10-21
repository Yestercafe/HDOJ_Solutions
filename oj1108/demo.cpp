#include <iostream>

int gcd(int n, int m);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int a, b, res;
    while (cin >> a >> b) {
        res = a / gcd(a, b) * b;
        cout << res << endl;
    }

    return 0;
}

int gcd(int n, int m)
{
    return m > 0 ? gcd(m, n % m) : n;
}
