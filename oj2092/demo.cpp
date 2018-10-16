#include <iostream>

static int _abs(int n) { return n > 0 ? n : -n; }

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int x, y;
    int plus, star;
    while (cin >> plus >> star) {
        bool isExist = false;
        if (plus == 0 && star == 0) break;
        for (x = 1, y = star / x; x <= _abs(star / x) + 1; ++x, y = star / x) {
            if (x * y == star)
                if (x + y == plus || -x - y == plus) {
                    isExist = true;
                    cout << "Yes" << endl;
                    break;
                }
        }
        if (!isExist) 
            cout << "No" << endl;
    }
    return 0;
}
