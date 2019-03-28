// 素数筛选法。在dis里看到的解法。
// 看到别人的代码后就明白了，这是类似Eratosthenes筛法的东西
// 如果是以后自己看到这段代码，那一定也能轻松弄懂
#include <iostream>
#define N 1000000

// 静态变量默认值为0
int arr[N];

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int count = 0;
    for (int k = 2; k < N; ++k) {
        if (!arr[k]) {   // 这个数是质数
            ++count;
            for (int i = k; i < N; i += k) {   // 这个质数的倍数的最大质因子一定是它
                arr[i] = count;
            }
        }
    }

    int n;
    while (cin >> n) {
        cout << arr[n] << endl;
    }

    return 0;
}
