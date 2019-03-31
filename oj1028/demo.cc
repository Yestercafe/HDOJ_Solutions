// 管他什么母函数公函数（大雾），30行动规ac，多漂亮
#include <iostream>

int dps[121][121];

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    for (int i = 0; i < 121; ++i) {
        dps[i][0] = dps[0][i] = dps[1][i] = 1;
    }

    for (int i = 2; i < 121; ++i) {
        for (int sum = 1; sum < 121; ++sum) {
            if (sum < i)
                dps[i][sum] = dps[i - 1][sum];
            else
                dps[i][sum] = dps[i - 1][sum] + dps[i][sum - i];
        }
    }

    int n;
    while (cin >> n) {
        cout << dps[n][n] << endl;
    }

    return 0;
}
