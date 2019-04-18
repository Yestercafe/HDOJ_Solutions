#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int maxx, maxy, minx, miny;
    int x, y;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) break;
        maxx = minx = x;
        maxy = miny = y;
        while (cin >> x >> y) {
            if (x == 0 && y == 0) break;
            maxx = max(maxx, x);
            minx = min(minx, x);
            maxy = max(maxy, y);
            miny = min(miny, y);
        }
        cout << minx << ' ' << miny << ' ' << maxx << ' ' << maxy << '\n';
    }

    return 0;
}
