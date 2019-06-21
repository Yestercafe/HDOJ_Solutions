// 很奇怪, 这题用三次项求和公式做没做对. 换用打表.
#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
ll arr[100005] = {0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;

    for (ll i = 1; i <= 100001; ++i) {
        if (i % 3 == 0) {
            arr[i] = arr[i - 1] + i * i * i;
        } else {
            arr[i] = arr[i - 1] + i;
        }
    }

    while (cin >> n) {
        if (n < 0) break;
        cout << arr[n] << '\n';
    }

    return 0;
}