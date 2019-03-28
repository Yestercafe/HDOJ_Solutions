// 王世好老师提供的解决方案
#include <iostream>

bool marked[20][20];
char map[20][20];
int w, h;
int count;
const int dirt[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};

void dfs(int x, int y) {
    marked[x][y] = true;
    for (int i = 0; i < 4; ++i) {
        int nextx = x + dirt[i][0];
        int nexty = y + dirt[i][1];
        if (nextx >= 0 && nextx < w && nexty >= 0 && nexty < h
            && !marked[nextx][nexty] && map[nextx][nexty] != '#') {
            ++count;
            dfs(nextx, nexty);
        }
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    while (cin >> w >> h) {
        if (w == 0 && h == 0) break;
        int stx, sty;
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                marked[j][i] = false;
                char ch;
                cin >> ch;
                map[j][i] = ch;
                if (ch == '@') {
                    stx = j;
                    sty = i;
                }
            }
        }
        count = 1;
        dfs(stx, sty);
        cout << count << endl;
    }

    return 0;
}
