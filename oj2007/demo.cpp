#include <iostream>
#define POW2(X) (X)*(X)
#define POW3(X) (X)*(X)*(X)

int main(void)
{
    using namespace std;
    int x, y, res2 = 0, res3 = 0;
    while (cin >> x >> y) {
        for (int i = x; i <= y; ++i) {
            if (i % 2)
                res3 += POW3(i);
            else
                res2 += POW2(i);
        }
        cout << res2 << ' ' << res3 << endl;
        res2 = 0;
        res3 = 0;
    }

    return 0;
}