#include <bits/stdc++.h>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    
    int t;
    while (cin >> t) {
        while (t--) {
            double u, v, w, l;
            cin >> u >> v >> w >> l;
            cout << fixed << setprecision(3) << l / (u + v) * w << '\n';    
        }
    }
    
    return 0;
}
