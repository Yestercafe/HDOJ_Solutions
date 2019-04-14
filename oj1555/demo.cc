#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int m, k;
    while (cin >> m >> k) {
        if (m == 0 && k == 0) break;
        int day = m;
        int add = m / k;
        while (add > 0) {
            int preday = day;
            day += add;
            add = day / k - preday / k;
        }
        cout << day << endl;
    }

    return 0;
}
