#include <iostream>

///  a + b = s
///  a - b = d
///  2a = s + d
///  s - a = b

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        int s, d;
        int a, b;
        while (t--) {
            cin >> s >> d;
            a = (s + d) / 2;
            b = s - a;
            if (b < 0) {
                cout << "impossible" << '\n';
            } else {
                cout << a << " " << b << endl;
            }
        }
    }

    return 0;
}
