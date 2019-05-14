#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            map<int, int> mp;
            while (n--) {
                int a;
                cin >> a;
                ++mp[a];
            }

            int max = -1;
            for (const auto &c: mp) {
                max = max > c.second ? max : c.second;
            }
            cout << max << '\n';
        }
    }

    return 0;
}
