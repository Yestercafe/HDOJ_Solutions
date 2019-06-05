#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int min, min2;
            min = min2 = numeric_limits<int>::max();
            while (n--) {
                int k;
                cin >> k;
                if (k <= min) {
                    min2 = min;
                    min = k;
                } else {
                    if (k <= min2) {
                        min2 = k;
                    }
                }
            }
            cout << min2 << endl;
        }
    }
    return 0;
}