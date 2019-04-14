// 埃氏筛法
#include <iostream>
#include <limits>
using namespace std;

bool prime[2 << 16];

void initPrime();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    initPrime();

    int n;
    while (cin >> n) {
        if (n == 0) break;

        int counter = 0;
        for (int i = 3; i <= n / 2; i += 2) {
            if (prime[i] && prime[n - i]) {
                ++counter;
            }
        }

        cout << counter << '\n';
    }

    return 0;
}

void initPrime()
{
    for (auto &c: prime)
        c = true;

    prime[0] = prime[1] = false;
    for (int i = 0; i < 2 << 15; ++i)
        if (prime[i] == true)
            for (int j = 2 * i; j < 2 << 16; j += i)
                prime[j] = false;
}
