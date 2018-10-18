//“在3blue1brown的视频看过”系列，第一次感受到课外知识的分量
//可惜没怎么看题目，把输入方式搞错了！fcuk cfuk fukc!
#include <iostream>
#include <cstdint>

int64_t pow3(int n) {
    int64_t res = 1;
    for (int i = 0; i < n; ++i) {
        res *= 3;
    }
    return res;
}

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int a;
    while (cin >> a)
        cout << pow3(a) - 1 << endl;
    return 0;
}
