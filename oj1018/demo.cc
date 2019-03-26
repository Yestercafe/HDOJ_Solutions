#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    while (cin >> t) {
        while (t--) {
            double bitCount = 0.;
            int n;
            cin >> n;
            if (n == 1) {
                cout << 1 << endl;
                continue;
            }
            for (int k = 1; k <= n; ++k) {
                bitCount += log10(k);
            }
            /*
            注意一下这里的算法，之前提交了两次WA，是因为错误的使用了ceil(bitCount)
            (也是第一次被csdn坑)。后来看了dis里以为老哥的csdn找到了正确的算法，如下：
            */
            cout << int(bitCount) + 1 << endl;
        }
    }

    return 0;
}
