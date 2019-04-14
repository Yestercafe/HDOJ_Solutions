// 超经典的一个题目，之前见过，^_^
#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int res = 0;
        while (n--) {
            int tmp;
            cin >> tmp;
            res ^= tmp;
        }
        cout << res << '\n';
    }

    return 0;
}
