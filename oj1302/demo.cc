#include <iostream>

static void kagiriMi(double *up, const double u, const double f) {
    *up -= u * f / 100.;
    if (*up < 0.)
        *up = 0.;
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double h, u, d, f;
    while (cin >> h >> u >> d >> f) {
        if (h == 0. && u == 0. && d == 0. && f == 0.)
            break;
        double up = u;
        double hi = 0.;
        int days = 0;
        while (true) {
            hi += up;
            ++days;
            if (hi > h) {
                cout << "success on day " << days << '\n';
                break;
            }
            hi -= d;
            if (hi < 0.) {
                cout << "failure on day " << days << '\n';
                break;
            }
            kagiriMi(&up, u, f);
        }
    }

    return 0;
}