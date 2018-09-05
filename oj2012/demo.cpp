#include <iostream>

bool prime(const int n);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    bool signs[90];  // -39 ~ 50
    for (int i = 0; i < 90; ++i) {
        signs[i] = prime(-39 + i);
    }

    int x, y;
    bool all;
    while (cin >> x >> y) {
        if (x == 0 && y == 0)
            break;
        all = true;
        for (int i = x; i <= y; ++i) {
            if (signs[i + 39] == false) {
                cout << "Sorry" << endl;
                all = false;
                break;
            }
        }
        if (all) {
            cout << "OK" << endl;
        }
    }

    return 0;
}

bool prime(const int n)
{
    int a = n * n + n + 41;
    for (int i = a - 1; i >= a / i; --i)
        if ((double)(a / i) == (double)a / (double)i)
            return false;
    return true;
}
