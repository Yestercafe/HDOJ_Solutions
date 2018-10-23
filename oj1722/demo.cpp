#include <iostream>

int gcd(int n, int m) {
    return m > 0 ? gcd(m, n % m) : n;
}

int lcm(int n, int m) {
    return n / gcd(n, m) * m;
}

int main(void)
{
    using namespace std;
    int a, b;
    while (cin >> a >> b) {
        if (a < b) swap(a, b);
        cout << b + lcm(a, b) / a * (a - b) << endl;;
    }
    return 0;
}
