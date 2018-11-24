// 上网上搜了一下，发现不是简单的排列组合问题，其中用到了递推思想
// 本算法使用了类斐波那契函数
#include <iostream>

int solution(int remain);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    int m;
    cin >> m;
    while (--m >= 0) {
        cin >> n;
        cout << solution(n - 1) << endl;
    }

    return 0;
}

int solution(int remain)
{
    if (remain == 1)
        return 1;
    else if (remain == 2)
        return 2;
    else
        return solution(remain - 1) + solution(remain - 2);
}
