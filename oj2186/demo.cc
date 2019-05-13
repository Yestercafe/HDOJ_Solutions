#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int a = n / 2;
            n -= n / 2;
            int b = n * 2 / 3;
            n -= n * 2 / 3;
            int c = n;
            cout << int(ceil(a / 10.) + ceil(b / 10.) + ceil(c / 10.)) << '\n';
        }
    }

    return 0;
}
