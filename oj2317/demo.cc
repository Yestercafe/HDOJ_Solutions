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
            auto sub = b - c;
            if (a > sub) {
                cout << "do not advertise\n";
            } else if (a < sub) {
                cout << "advertise\n";
            } else {
                cout << "does not matter\n";
            }
        }
    }

    return 0;
}
