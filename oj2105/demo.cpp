#include <iostream>
#include <cmath>
#include <iomanip>

struct Coord {
    double x, y;
    Coord() = default;
    Coord(double x_, double y_) : x(x_), y(y_) {}
};

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        if (!n) break;
        while (n--) {
            Coord p1, p2, p3;
            cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y;

            Coord delta, mid((p1.x + p2.x) / 2., (p1.y + p2.y) / 2.);
            delta.x = (mid.x - p3.x) * 2 / 3.;
            delta.y = (mid.y - p3.y) * 2 / 3.;

            cout << fixed << setprecision(1)
                 << p3.x + delta.x << " "
                 << p3.y + delta.y << endl;
        }
    }


    return 0;
}
