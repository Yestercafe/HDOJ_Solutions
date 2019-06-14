#include <bits/stdc++.h>
using namespace std;

static int gcd(int a, int b) {
    return (b > 0) ? gcd(b, a % b) : a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while (cin >> a >> b) {
        cout << a + b - gcd(a, b) << endl;
    }

    return 0;
}