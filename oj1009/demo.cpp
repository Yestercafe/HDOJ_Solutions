#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>

int main(void)
{
    using namespace std;

    int j, f;
    int m, n;

    while (~scanf("%d%d", &m, &n)) {
        if (m == n && m == -1) break;
        double jbg = 0;
        vector<pair<int, int>> rooms;
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &j, &f);
            rooms.push_back(make_pair(j, f));
        }

        sort(rooms.begin(), rooms.end(),
                [](pair<int, int> a, pair<int, int> b) {
                    return (double)a.first / a.second
                         > (double)b.first / b.second;
                }
            );

        for (int i = 0; i < n; ++i) {
            if (m - rooms[i].second >= 0) {
                m -= rooms[i].second;
                jbg += rooms[i].first;
            } else {
                jbg += m * (double)rooms[i].first / rooms[i].second;
                break;
            }
        }
        printf("%.3lf\n", jbg);
    }

    return 0;
}
