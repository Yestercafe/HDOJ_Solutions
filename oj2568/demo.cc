#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int a;
            cin >> a;
            int count = 0;
            while (a != 0) {
                count += a & 1;
                a >>= 1;
            }
            cout << count << '\n';
        }
    }
    return 0;
}