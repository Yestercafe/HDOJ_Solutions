#include <iostream>
#include <vector>
#include <cstdlib>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while (t--) {
        int n, bag;
        cin >> n >> bag;
        vector<int> values, volumes;

        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            values.push_back(tmp);
        }
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            volumes.push_back(tmp);
        }

        vector<vector<int>> dps;
        {
            vector<int> line (bag + 1, 0);
            dps.assign(n + 1, line);
        }

        for (int bann = 1; bann <= n; ++bann) {
            for (int avb = 0; avb <= bag; ++avb) {
                if (avb < volumes[bann - 1]) {
                    dps[bann][avb] = dps[bann - 1][avb];
                    continue;
                } else {
                    int yes = values[bann - 1] + dps[bann - 1][avb - volumes[bann - 1]];
                    int no  = dps[bann - 1][avb];
                    dps[bann][avb] = yes > no ? yes : no;
                }
            }
        }

        // for (auto& v: dps) {
        //     for (auto& c: v) {
        //         cout << c << " ";
        //     }
        //     cout << endl;
        // }

        cout << dps.back().back() << endl;
    }

    // system("pause > nul");
    return 0;
}
