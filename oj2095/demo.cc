#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        if (t == 0) { break; }
        int present = 0;
        while (t--) {
            int a;
            cin >> a;
            present ^= a;
        }
        cout << present << '\n';
    }

    return 0;
}
