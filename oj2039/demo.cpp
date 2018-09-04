//hint : 一定要注意类型！一定要注意类型！一定要注意类型！
#include <iostream>

int main(void)
{
    using namespace std;
    double a, b, c;
    int n;
    cin >> n;
    while (--n >= 0) {
        cin >> a >> b >> c;
        double x = a, y, z = a;
        if (b < x) x = b; if (c < x) x = c;
        if (b > z) z = b; if (c > z) z = c;
        y = a + b + c - x - z;
        if (x + y > z)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
