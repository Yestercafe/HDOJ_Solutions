// 这种题要避免进行浮点书乘除运算。
// 使用除法运算，两次提交WA，个人感觉逻辑是没什么问题的。估计是浮点低精度运算的锅。
// 其实最开始我还准备用一元二次方程做（逃
#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    double vul, d;
    while (cin >> vul >> d) {
        int timer = 0;
        for (int i = 1; ; ++i) {
            for (int j = 0; j < i; ++j) {
                vul -= d;
                ++timer;
                if (vul <= 0) {
                    goto end;
                }
            }
            ++timer;
        }

        end:
        cout << timer << '\n';
    }

    return 0;
}
