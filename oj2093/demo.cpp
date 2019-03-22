// 压根儿就不需要作废，当时太渣了
#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <tuple>
#include <cstring>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n, punish;
    vector<tuple<string, int, int>> ranks;
    scanf("%d%d", &n, &punish);
    char c_str[20];
    while (~scanf("%s", c_str)) {
        string name (c_str);
        int corrCount = 0;
        int penalty = 0;

        for (int i = 0; i < n; ++i) {
            scanf("%s", c_str);
            if (c_str[0] == '-' || c_str[0] == '0')
                continue;
            else {
                if (c_str[strlen(c_str) - 1] == ')') {
                    int used, times;
                    sscanf(c_str, "%d(%d)", &used, &times);
                    penalty += used + times * punish;
                } else {
                    int used;
                    sscanf(c_str, "%d", &used);
                    penalty += used;
                }
                ++corrCount;
            }
        }

        ranks.push_back(make_tuple(name, corrCount, penalty));
    }

    sort(ranks.begin(), ranks.end(),
        [](const tuple<string, int, int>& lhs, const tuple<string, int, int>& rhs) {
            if (get<1>(lhs) != get<1>(rhs)) {
                return get<1>(lhs) > get<1>(rhs);
            } else {
                return get<2>(lhs) < get<2>(rhs);
            }
        });

    for (const auto& t: ranks) {
        printf("%-10s %2d %4d\n", get<0>(t).c_str(), get<1>(t), get<2>(t));
    }

    return 0;
}
