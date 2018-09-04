//第一道真正意义上的acm题，纪念一下。
#include <iostream>

int gcd(int a, int b);

int main(void)
{
    using namespace std;
    int m, n;
    while (cin >> m >> n) {
        if (m == -1 && n == -1)
            break;
        if (gcd(m, n) == 1 || n == 1)
            cout << "YES" << endl;
        else
            cout << "POOR Haha" << endl;
    }
    return 0;
}

int gcd(int a, int b)
{
    return a % b ? gcd(b, a % b) : b;
}
