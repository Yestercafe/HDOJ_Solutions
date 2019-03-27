// 注意这不是AC代码！这只是C++写的思路，AC代码见java版本
// 自己想的思路，排列组合
// 而后去dis看了是卡什么数，一脸懵逼
// 因为阶乘数值过大，64位整都存不了，尝试使用传说可以存250+个整数位的double型，发现结果精度不够
// 故使用Java大数完成
#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        double res = 1;
        for (int i = 0; i < n; ++i) {
            res *= 2 * n - i;
            res /= i + 1;
        }
        cout << fixed << setprecision(0) << res / (n + 1) << endl;
    }

    return 0;
}
