#include <iostream>

int main(void)
{
    using namespace std;
    int n;
    int a, res = 1;
    while (cin >> n)
    {
        while (--n >= 0) {
            cin >> a;
            res *= a % 2 ? a : 1;
        }
        cout << res << endl;
        res = 1;
    }
    return 0;
}