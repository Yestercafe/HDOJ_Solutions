#include <iostream>

const int dys[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
const int oct21 = 294;

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    while (cin >> t) {
        while (t--) {
            int mm, dd;
            cin >> mm >> dd;
            if (mm == 10 && dd == 21) {
                cout << "It's today!!\n";
            } else {
                if ((mm < 10) || (mm == 10 && dd < 21)) {
                    int dy = dys[mm - 1] + dd;
                    cout << oct21 - dy << '\n';
                }  else {
                    cout << "What a pity, it has passed!\n";
                }
            }
        }
    }

    return 0;
}
