#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    bool firstIn = true;
    while (cin >> str) {
        int ans = 0;
        for (const auto &ch: str) {
            if ((ch - '0') % 2 == 0) {
                ans += ch - '0';
            }
        }
        if (firstIn) {
            firstIn = false;
        } else {
            cout << endl;
        }
        cout << ans << endl;
    }

    return 0;
}
