#include <iostream>

int main(void)
{
    using namespace std;
    int n;
    int a, res = 0;
    while (cin >> n) {
        while (--n >= 0) {
            cin >> a;
            res += a;
        }
        cout << res << endl;;
        res = 0;
    }
    return 0;
}
