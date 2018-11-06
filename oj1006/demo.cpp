#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    double d;
    double rect;
    double percent;
    while (cin >> d) {
        rect = 0.;
        if (d == -1) break;
        if (360 - 4 * d <= 0) {
            rect += (360. - 3. * d) * (180. - 3. / 2. * d);
        } else {
            rect += 360. * d - 7. / 2. * d;
            rect += (360. - 4. * d) * (180. - 2. * d);
        }
        percent = rect / (360. * (180. - d));

        cout << percent * 100 << endl;
    }

    return 0;
}
