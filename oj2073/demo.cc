#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Coord {
    int x, y;
    Coord() = default;
    Coord(int x_, int y_)
        : x(x_), y(y_) {}
    friend istream & operator>> (istream &is, Coord &coord);
    bool operator< (const Coord &rhs) {
        int s1 = this->x + this->y;
        int s2 = rhs.x   + rhs.y;
        if (s1 != s2) {
            return s1 < s2;
        } else {
            return this->x < rhs.x;
        }
    }
    bool operator== (const Coord &rhs) {
        return this->x == rhs.x && this->y == rhs.y;
    }
    bool operator> (const Coord &rhs) {
        int s1 = this->x + this->y;
        int s2 = rhs.x   + rhs.y;
        if (s1 != s2) {
            return s1 > s2;
        } else {
            return this->x > rhs.x;
        }
    }
    int getSum() const { return this->x + this->y; }
};

istream & operator>> (istream &is, Coord &coord) {
    is >> coord.x >> coord.y;
    return is;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const double sqrt2 = sqrt(2.);
    cout << fixed << setprecision(3);

    int t;
    while (cin >> t) {
        while (t--) {
            Coord a, b;
            cin >> a >> b;
            if (a > b) {
                swap(a, b);
            }

            // cout << "After swaping: " << a.x << ' ' << a.y << ' ' << b.x << ' ' << b.y << '\n';

            if (a.getSum() == b.getSum()) {
                cout << sqrt2 * (b.x - a.x) << '\n';
            } else {
                const auto as = a.getSum();
                const auto bs = b.getSum();

                double sum = 0.;
                // cout << "sum += " << sqrt2 * (as - a.x) << endl
                //      << "sum += " << sqrt2 * b.x << endl;

                sum += sqrt2 * (as - a.x);
                sum += sqrt2 * b.x;
                for (int i = as; i < bs; ++i) {
                    sum += sqrt(i * i + (i + 1) * (i + 1));
                    if (i > as)
                        sum += sqrt2 * i;
                    // cout << "sum += " << sqrt(i * i + (i + 1) * (i + 1)) << endl
                    //      << "sum += " << sqrt2 * i << endl;
                }
                cout << sum << '\n';
            }
        }
    }
    return 0;
}
