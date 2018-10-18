#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    bool isPrime[10000];
    isPrime[0] = false;
    for (int i = 1; i < 10000; ++i) {
        isPrime[i] = true;
    }
    for (int i = 2; i <= 10000; ++i) {
        if (isPrime[i-1] == true) {
            for (int j = 2; i * j <= 10000; ++j) {
                isPrime[j*i-1] = false;
            }
        } else {
            continue;
        }
    }

    int n;
    while (cin >> n) {
        int count = 0;
        if (n == 0) break;
        for (int i = 0; i < n / 2; i += 2) {
            if (isPrime[i] && isPrime[n - i - 2] && i != n - i - 2) {
                ++count;
            }
        }
        cout << count << endl;
    }

    return 0;
}
