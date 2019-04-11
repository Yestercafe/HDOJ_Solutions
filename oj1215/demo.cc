#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int sum = 1;
            for (int i = 2; i <= n / i; ++i) {
                if (n % i == 0) {
                    sum += i;
                    if (n / i != i)
                        sum += n / i;
                }
            }
            cout << sum << '\n';
        }
    }

    return 0;
}
