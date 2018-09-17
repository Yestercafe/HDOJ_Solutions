#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, a, count = 0;
    while (cin >> n) {
        if (n == 0) break;
        while (--n >= 0) {
            cin >> a;
            count += a / 100; a %= 100;
            count += a / 50;  a %= 50;
            count += a / 10;  a %= 10;
            count += a / 5;   a %= 5;
            count += a / 2;   a %= 2;
            count += a / 1;
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}
