#include <iostream>
using namespace std;

int stat[10005];

bool isPerfection(const int n) {
    int sum = 1;
    for (int i = 2; i <= n / i; ++i) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i)
                sum += n / i;
        }
    }
    return sum == n;
}

int main()
{
    ios::sync_with_stdio(false);

    for (int i = 5; i < 10005; ++i) {
        if (isPerfection(i))
            stat[i] = stat[i - 1] + 1;
        else
            stat[i] = stat[i - 1];
    }

    int t;
    while (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            if (a > b)
                swap(a, b);
            cout << stat[b] - stat[a - 1] << endl;
        }
    }

    return 0;
}
