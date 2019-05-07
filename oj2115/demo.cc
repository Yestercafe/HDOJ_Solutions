#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
using psi = pair<string, int>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    int loopCount = 0;
    while (cin >> t) {
        ++loopCount;
        if (t == 0) break;
        if (loopCount != 1) {
            cout << '\n';
        }
        cout << "Case #" << loopCount << '\n';
        vector<psi> lst;
        while (t--) {
            string name;
            int mm, ss;
            char tmp;
            cin >> name >> mm >> tmp >> ss;
            lst.push_back(make_pair(name, mm * 60 + ss));
        }

        sort(lst.begin(), lst.end(), [](const psi &lhs, const psi &rhs) {
                return lhs.second < rhs.second;
            });

        for (int i = 0, order = 1; i < lst.size(); ++i) {
            if (i != 0) {
                if (lst[i - 1].second != lst[i].second) {
                    order = i + 1;
                }
            }
            cout << lst[i].first << ' ' << order << '\n';
        }
    }

    return 0;
}
