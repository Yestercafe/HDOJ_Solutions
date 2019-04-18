#include <iostream>
using namespace std;

int triangle[2005][2005];

int main()
{
    ios::sync_with_stdio(false);

    triangle[0][0] = triangle[1][0] = triangle[1][1] = 1;
    for (int i = 2; i <= 2002; ++i) {
        triangle[i][0] = 1;
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = (triangle[i - 1][j - 1] + triangle[i - 1][j]) % 1007;
        }
        triangle[i][i] = 1;
    }

    int t;
    while (cin >> t) {
        while (t--) {
            int m, n;
            cin >> m >> n;
            cout << triangle[n][m] << '\n';
        }
    }

    return 0;
}
