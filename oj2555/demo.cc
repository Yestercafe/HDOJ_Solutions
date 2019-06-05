#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;
using ppp = pair<pii, pii>;

int main()
{
    int m, n;
    while (cin >> m >> n) {
        vector<pii> bags;
        vector<ppp> traps;

        int a, b, c, d;
        while (m--) {
            cin >> a >> b;
            bags.push_back(make_pair(a, b));
        }
        while (n--) {
            cin >> a >> b >> c >> d;
            traps.push_back(make_pair(make_pair(a, b), make_pair(c, d)));
        }

        vector<int> circums;
        for (const auto &pt: bags) {
            int sum = 0;
            for (const auto &pp: traps) {
                if (
                    pp.first.first <= pt.first && 
                    pt.first <= pp.second.first && 
                    pp.first.second <= pt.second && 
                    pt.second <= pp.second.second
                ) {
                    if (sum == 0)   // 这题目弱智， 不建议二刷
                        sum = 2 * (pp.second.first - pp.first.first + 
                            pp.second.second - pp.first.second);
                }
            }
            circums.push_back(sum);
        }
        sort(circums.begin(), circums.end(), greater<int>());
        copy(circums.begin(), circums.end(), ostream_iterator<int>(cout, "\n"));
    }
    return 0;
}