#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m) {
        vector<int> upper(n + 1, 1);
        vector<int> lower(n + 1, m);
        int p;
        cin >> p;
        while (p--) {
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2) swap(x1, x2);
            if (y1 > y2) swap(y1, y2);

            for (int i = x1; i <= x2; ++i) {
                upper[i] = upper[i] > y2 ? upper[i] : y2;
                lower[i] = lower[i] < y1 ? lower[i] : y1;
            }

//            for (int i = 1; i <= n; ++i) {
//                cout << upper[i] << ' ' << lower[i]<< endl;
//            }
        }

        int q;
        cin >> q;
        while (q--) {
            bool isYes = true;
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2) swap(x1, x2);
            if (y1 > y2) swap(y1, y2);

            for (int i = x1; i <= x2; ++i) {
                if (y2 > upper[i]) {
                    isYes = false;
                    break;
                }
                if (y1 < lower[i]) {
                    isYes = false;
                    break;
                }
            }

            if (isYes) {
                cout << "YES\n" << flush;
            } else {
                cout << "NO\n" << flush;
            }
        }
    }

    return 0;
}
