#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
//    cin.tie(nullptr);

    int x, y, z;
    while (cin >> x >> y >> z) {
        vector<vector<int>> first, second, third;

        {
            vector<int> xLine (x, 0);
            vector<int> yLine (y, 0);
            vector<int> zLine (z, 0);

            first.assign(x, yLine);
            second.assign(y, zLine);
            third.assign(z, xLine);
        }

        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                cin >> first[i][j];
            }
        }

        for (int i = 0; i < y; ++i) {
            for (int j = 0; j < z; ++j) {
                cin >> second[i][j];
            }
        }

        for (int i = 0; i < z; ++i) {
            for (int j = 0; j < x; ++j) {
                cin >> third[i][j];
            }
        }

        int sum = 0;
        for (int i = 0; i < x; ++i) {
            for (int j = 0; j < y; ++j) {
                for (int k = 0; k < z; ++k) {
                    sum += first[i][j] & second[j][k] & third[k][i];
                }
            }
        }

        cout << sum << '\n';
    }

    return 0;
}
