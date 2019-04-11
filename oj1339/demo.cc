#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d;
    while (cin >> d) {
        while (d--) {
            int n;
            cin >> n;
            int p = 0;
            while (n % 2 == 0) {
                n >>= 1;
                ++p;
            }
            cout << n << " " << p << '\n';
        }
    }

    return 0;
}
