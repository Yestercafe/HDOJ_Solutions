//hint : 千万不要在oj里用\b，被坑了好几次了
#include <iostream>
#define POW3(X) (X)*(X)*(X)

int main(void)
{
    using namespace std;
    int m, n;
    bool sg;
    while (cin >> m >> n) {
        sg = true;
        for (int i = m; i <= n; ++i) {
            int a = i / 100;
            int b = i / 10 % 10;
            int c = i % 10;
            if (i == POW3(a) + POW3(b) + POW3(c)) {
                if (!sg) cout << ' ';
                cout << i;
                sg = false;
            }
        }
        if (sg)
            cout << "no" << endl;
        else
            cout << endl;
    }

    return 0;
}
