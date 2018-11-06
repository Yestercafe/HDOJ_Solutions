#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        int pass = 0, cur = 0;
        int cost = 0;
        if (n == 0) break;
        for (int i = 0; i < n; ++i) {
            pass = cur;
            cin >> cur;
            if (pass < cur) {
                cost += (cur - pass) * 6;
            } else {
                cost += (pass - cur) * 4;
            }
        }
        cost += n * 5;
        cout << cost << endl;
    }

    return 0;
}
