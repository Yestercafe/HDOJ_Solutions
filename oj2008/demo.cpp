#include <iostream>

int main(void)
{
    using namespace std;
    int n, cm, cz, cp;
    float a;
    while (cin >> n) {
        if (n == 0)
            break;
        cm = cz = cp = 0;
        while (--n >= 0) {
            cin >> a;
            if (a < 0)
                ++cm;
            else if (a == 0)
                ++cz;
            else
                ++cp;
        }
        cout << cm << ' ' << cz << ' ' << cp << endl;
    }

    return 0;
}
