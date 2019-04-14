#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int a, b, c;
            cin >> a >> b >> c;

            bool existed = false;
            for (int x = 1000; x < 10000; ++x) {
                if (x % a == 0 && (x+1) % b == 0 && (x+2) % c == 0) {
                    existed = true;
                    cout << x << '\n';
                    break;
                }
            }

            if (!existed) {
                cout << "Impossible\n";
            }
        }
    }


    return 0;
}
