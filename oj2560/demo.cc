#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            int imul = a * b;
            int k, sum = 0;
            while (imul--) {
                cin >> k;
                sum += k;
            }
            cout << sum << '\n';
        }
    }
    return 0;
}