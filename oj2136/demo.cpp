//此题要求已经达成。但是没有办法优化时间。
//

#include <iostream>
#include <map>
#include <utility>

int main(void)
{
    using namespace std;
    //ios::sync_with_stdio(false);

    int primeList[1000000];
    primeList[1] = 1;
    for (int i = 2; i < 1000000; ++i) {
        primeList[i] = 1;
    }

    for (int i = 2; i < 500000; ++i) {
        if (primeList[i] == 1) {
            for (int j = 2; i * j < 1000000; ++j) {
                primeList[i*j] = i;
            }
        }
    }

    /*map<int, int> primeCount;
    for (int i = 2, pos = 1; i < 1000000; i++) {
        if (primeList[i] == 1) {
            primeCount.insert(make_pair(i, pos));
            ++pos;
        }
    }*/

    int n;
    while (cin >> n) {
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        for (int c = n; c > 1; --c) {
            if (n / c * c == n) {
                if (primeList[c] == true) {
                    //cout << primeCount.find(c)->second << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
