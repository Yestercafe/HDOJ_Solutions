// ？？？傻逼题目？多组输入不行？理论上不应该呀？
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int loopCount = 1; loopCount <= t; ++loopCount) {
        double origin;
        string unit;
        cin >> origin >> unit;
        cout << loopCount << ' ' << fixed << setprecision(4);
        if (unit == "kg") {
            cout << 2.2046 * origin << " lb\n";
        } else if (unit == "lb") {
            cout << 0.4536 * origin << " kg\n";
        } else if (unit == "l") {
            cout << 0.2642 * origin << " g\n";
        } else {
            cout << 3.7854 * origin << " l\n";
        }
    }

    return 0;
}
