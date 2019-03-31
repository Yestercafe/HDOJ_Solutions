#include <iostream>
#include <iterator>
#include <algorithm>
#include <iomanip>

static double abs(const double a) {
    return a < 0 ? -a : a;
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    double x[4], y[4];
    while (cin >> x[0] >> y[0]) {
        for (int i = 1; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

        double midX1 = (x[0] + x[1]) / 2, midY1 = (y[0] + y[1]) / 2;
        double midX2 = (x[2] + x[3]) / 2, midY2 = (y[2] + y[3]) / 2;

        double deltaX = ::abs(midX1 - midX2);
        double deltaY = ::abs(midY1 - midY2);

        double a1 = ::abs(x[1] - x[0]), b1 = ::abs(y[1] - y[0]);
        double a2 = ::abs(x[3] - x[2]), b2 = ::abs(y[3] - y[2]);

        if (deltaX >= (a1 + a2) / 2 || deltaY >= (b1 + b2) / 2) {
            cout << "0.00" << endl;
        } else {
            sort(begin(x), end(x));
            sort(begin(y), end(y));
            cout << fixed << setprecision(2)
                 << (x[2] - x[1]) * (y[2] - y[1]) << endl;
        }

    }

    return 0;
}
