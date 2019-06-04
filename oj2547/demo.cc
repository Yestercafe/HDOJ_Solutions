#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    
    int t;
    while (cin >> t) {
        while (t--) {
            double a, b, c, d;
            cin >> a >> b >> c >> d;
            
            auto m = sqrt((a - c) * (a - c) + (b - d) * (b - d));
            
            cout << fixed << setprecision(1) << m << '\n';
        }
    }
    
    return 0;
} 