#include <iostream>

int gcd(int a, int b) { return a % b ? gcd(b, a % b) : b; }

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int res, a, n;
    while (cin >> n) {
        res = 1;
        while (--n >= 0) {
            cin >> a;
            res = res  / gcd(res, a) * a;  //记住了，先除再乘
        }
        cout << res << endl;
    }
    return 0;
}
