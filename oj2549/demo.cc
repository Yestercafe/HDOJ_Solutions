#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            string a;   // 这题在处理小数上有点奇怪, 多加留意
            int b;
            cin >> a >> b;
            a = a + "000000";
            while (a.front() != '.') {
                a.erase(a.begin());
            }
            cout << a[b] << '\n';
        }
    }
    return 0;
}