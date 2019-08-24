#include <bits/stdc++.h>
using namespace std;

int dp[10050];

int main()
{
    int t;
    while (cin >> t) {
        if (t == 0) break;
        memset(dp, 0, sizeof(dp));
        int sum = 0;
        dp[0] = 1;
        while (t--) {
            int p, m;
            cin >> p >> m;
            sum += p * m;
            for (int i = sum; i >= 0; --i) {  // 这里如果从前往后会算重复的
                for (int t = 1; t <= m; ++t) {
                    if (i - p * t >= 0) {
                        dp[i] = (dp[i] + dp[i - p * t]) % 10000;
                    } else {
                        break;
                    }
                }
            }
        }
        
        if (sum % 3 == 0 && dp[sum / 3] != 0) {
            cout << dp[sum / 3] << endl;
        } else {
            cout << "sorry\n";
        }
    }

    return 0;
}