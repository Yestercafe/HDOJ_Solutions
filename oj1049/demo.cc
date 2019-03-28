#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n, u, d;
    while (cin >> n >> u >> d) {
        if (n == 0 && u == 0 && d == 0) break;
        int m = ceil(double(n - u) / (u - d));
        cout << 2 * m + 1 << endl;
    }

    return 0;
}
