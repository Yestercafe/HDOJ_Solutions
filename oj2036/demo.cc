#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int x0, y0, x1, y1, x2, y2;
        cin >> x0 >> y0 >> x1 >> y1;
        double sum = 0.;
        n -= 2;
        while (n--) {
            cin >> x2 >> y2;
            sum += .5 * (x0 * y1 - y0 * x1 + x1 * y2 - y1 * x2 + x2 * y0 - y2 * x0);
            x1 = x2;
            y1 = y2;
        }
        cout << fixed << setprecision(1) << sum << endl;
    }

    return 0;
}
