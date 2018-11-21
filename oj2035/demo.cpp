// 最多要做20000次乘法，开始只是写着玩的，没想ac
// 结果一submit，卧槽ac了
// 评价：emmmm……
#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m) {
        if (n == m && n == 0) break;
        int res = 1;
        n %= 1000;
        for (int i = 0; i < m; ++i) {
            res *= n;
            res %= 1000;
        }
        cout << res << endl;
    }
    return 0;
}
