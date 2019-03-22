#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> values;
        for (int i = 0; i < n; ++i) {
            int tmp;
            cin >> tmp;
            values.push_back(move(tmp));
        }
        int remain;
        cin >> remain;

        if (remain < 5) {
            cout << remain << endl;
            continue;
        } else if (n == 1) {
            cout << remain - values[0] << endl;
            continue;
        }

        int maxValue;
        {
            auto maxPos = values.begin();
            for (auto itr = values.begin(); itr != values.end(); ++itr) {
                maxPos = *maxPos > *itr ? maxPos : itr;
            }
            maxValue = *maxPos;
            values.erase(maxPos);
        }

        // copy(begin(values), end(values), ostream_iterator<int>(cout, ", "));
        // cout << endl;

        vector<vector<int>> dps;
        {
            vector<int> line (remain - 5 + 1, 0);
            dps.assign(n - 1 + 1, line);
        }

        for (int bann = 1; bann <= n - 1; ++bann) {
            for (int rem = 0; rem <= remain - 5; ++rem) {
                if (values[bann - 1] > rem) {
                    dps[bann][rem] = dps[bann - 1][rem];
                } else {
                    int yes = values[bann - 1] + dps[bann - 1][rem - values[bann - 1]];
                    int no  = dps[bann - 1][rem];
                    dps[bann][rem] = (yes > no && yes <= remain) ? yes : no;
                }
            }
        }

        // for (const auto& v: dps) {
        //     for (const auto& c: v) {
        //         cout << c << " ";
        //     }
        //     cout << endl;
        // }

        cout << remain - dps.back().back() - maxValue << endl;
    }

    return 0;
}
