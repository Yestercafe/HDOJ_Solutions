// 这是错误的解法. 
// 这是一个bfs写的版本. 
// 但是由于没有注意看清题意, 这题的要求其实使用bfs是不会满足的.  
// 昨天最初写的dfs的版本反而是对的. 超时是因为需要剪枝. 
#include <iostream>
#include <deque>
#include <tuple>
#include <utility>
#include <memory.h>
using namespace std;
using Node = tuple<int, int, int>;

char maze[11][11];
bool walked[11][11];
const int DIRTS[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

pair<int, int> st, ed;

deque<Node> records;

int n, m, t;

int solve(const Node& pos) {
    auto posx  = get<0>(pos);
    auto posy  = get<1>(pos);
    auto depth = get<2>(pos);

    if (posx == ed.first and posy == ed.second) {
        if (depth < t) {
            return -1;
        } else if (depth == t) {
            return depth;
        }
    }

    for (int r = 0; r < 4; ++r) {
        auto nextx = posx + DIRTS[r][0];
        auto nexty = posy + DIRTS[r][1];

        if (nextx >= 0 && nexty >= 0
            and nextx < n and nexty < m
            and !walked[nextx][nexty]
            and maze[nextx][nexty] != 'X')
        {
            records.push_back(Node(nextx, nexty, depth + 1));
        }
    }

    while (!records.empty()) {
        auto nextx = get<0>(records.front());
        auto nexty = get<1>(records.front());
        auto depther = get<2>(records.front());
        records.pop_front();

        walked[nextx][nexty] = true;
        auto ret = solve(Node(nextx, nexty, depther));
        walked[nextx][nexty] = false;

        if (ret > 0) {
            return ret;
        }
    }

    return -1;
}


int main()
{
    while (cin >> n >> m >> t) {
        if (n == 0 and m == 0 and t == 0)
            break;

        memset(walked, 0, 11 * 11);
        records.clear();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> maze[i][j];
                switch (maze[i][j]) {
                  case 'S':
                    st.first  = i;
                    st.second = j;
                    break;
                  case 'D':
                    ed.first  = i;
                    ed.second = j;
                    break;
                  default:
                    break;
                }
            }
        }

        auto s = solve(Node(st.first, st.second, 0));
        if (s >= 0 && s <= t) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}