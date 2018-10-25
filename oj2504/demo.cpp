#include <iostream>

int gcd (int a, int b) {
    return b > 0 ? gcd(b, a % b) : a;
}

int main(void)
{
    using namespace std;
    int a, b, c;
    int n;
    cin >> n;
    while (--n >= 0) {
        cin >> a >> b;
        int fact = a / b;
        for (c = 2; gcd(fact, c) != 1; ++c)
            continue;
        c *= b;
        cout << c << endl;
    }

    return 0;
}
