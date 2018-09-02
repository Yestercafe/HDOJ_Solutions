#include <iostream>

int main(void)
{
    using namespace std;
    int n, m;
    int a, res = 0;
    cin >> m;
    while (--m >= 0) {
        cin >> n;
        while (--n >= 0) {
            cin >> a;
            res += a;
        }
        cout << res << endl;
        res = 0;
        if (m != 0)
            cout << endl;
    }
    return 0;
}
