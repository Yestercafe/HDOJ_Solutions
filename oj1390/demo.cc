#include <iostream>

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
            bool firstIn = true;
            int bit = 0;
            while (n != 0) {
                if (n % 2) {
                    if (!firstIn) {
                        cout << ' ';
                    } else {
                        firstIn = false;
                    }
                    cout << bit;
                }
                n >>= 1;
                ++bit;
            }
            cout << '\n';
        }
    }

    return 0;
}
