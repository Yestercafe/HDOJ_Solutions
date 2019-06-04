#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            double s, u, v;
            cin >> s >> u;
            v = 1. / tan(atan(1. / s) - atan(1. / u));
            double ff = v * u - s * u - s * v;
            printf("%.0f\n", ff);
        }
    }
    return 0;
}