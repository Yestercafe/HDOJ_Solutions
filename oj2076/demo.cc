#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int hh, mm, ss;
            cin >> hh >> mm >> ss;
            hh %= 12;
            double jin_hari = hh * (360. / 12) + mm * (360. / 12 / 60) + ss * (360. / 12 / 60 / 60);
            double bun_hari = mm * (360. / 60) + ss * (360. / 60 / 60);
            double delta    = abs(jin_hari - bun_hari);
            if (delta > 180) {
                delta = 360 - delta;
            }
            cout << int(delta) << '\n';
        }
    }

    return 0;
}
