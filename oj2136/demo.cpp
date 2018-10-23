//此题要求已经达成。但是没有办法优化时间。
//第二次修改，依然超时

#include <iostream>

int main(void)
{
    using namespace std;
    //ios::sync_with_stdio(false);
    int primeList[1000000];
    int primeCount[1000000];

    primeList[1] = 0;
    for (int i = 2; i < 1000000; ++i) {
        primeList[i] = 0;
    }

    for (int i = 2, c = 1; i < 1000000; ++i) {
        if (primeList[i] == 0) {
            for (int j = 2; i * j < 1000000; ++j) {
                primeList[i*j] = i;
            }
        }
        if (primeList[i] == 0) {
            primeCount[i] = c;
            primeList[i] = primeCount[i];
            ++c;
        } else {
            primeList[i] = primeCount[primeList[i]];
        }
    }

    int n;
    while (cin >> n) {
        if (n == 1) {
            cout << 0 << endl;
            continue;
        } else {
            cout << primeList[n] << endl;
        }
    }

    return 0;
}
