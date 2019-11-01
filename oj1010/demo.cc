#include <iostream>
#include <memory.h>
using namespace std;

char maze[10][10];
int visited[10][10];
int dirt[][2] = {1, 0, -1, 0, 0, 1, 0, -1};

int n, m, t;
struct {int x, y;} st, ed;
bool isFinished;

void dfs(int x, int y, int step)
{
    // cout << "dfs(" << x << ',' << y << ',' << step << ")\n";
    if (x == ed.x && y == ed.y) {
        if (step == t) {
            isFinished = true;            
        }
        return ;
    }
    if (isFinished) return ;
    if (step >= t) return ;
    const int& max_x = m;
    const int& max_y = n;
    for (int d = 0; d < 4; ++d) {
        const int next_x = x + dirt[d][0];
        const int next_y = y + dirt[d][1];
        if (next_x > 0 && next_y > 0 &&
            next_x <= max_x && next_y <= max_y &&
            !visited[next_x][next_y] && maze[next_x][next_y] != 'X') {
            visited[next_x][next_y] = 1;
            dfs(next_x, next_y, step + 1);
            visited[next_x][next_y] = 0;
        }
    }
}

static int __abs(const int a) {
    return a < 0 ? -a : a;
}

int main()
{
    while (cin >> n >> m >> t) {
        if (n == 0 && m == 0 && t == 0) break;
        memset(visited, 0, sizeof(visited));
        isFinished = false;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                cin >> maze[j][i];
                if (maze[j][i] == 'S') {
                    st.x = j;
                    st.y = i;
                } else if (maze[j][i] == 'D') {
                    ed.x = j;
                    ed.y = i;
                }
            }
        }

        if ((__abs(st.x - ed.x) + __abs(st.y - ed.y) - t) % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        visited[st.x][st.y] = 1;
        dfs(st.x, st.y, 0);

        if (isFinished) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}