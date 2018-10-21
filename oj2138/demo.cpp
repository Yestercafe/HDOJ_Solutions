#include <iostream>
#include <cstdint>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, tmp;
    int32_t a;
    int rvCount;
    while (cin >> n) {
        tmp = n;
        rvCount = 0;
        while (--tmp >= 0) {
            cin >> a;
            for (int32_t i = 2; i <= a / i; ++i) {
                if (i * (a / i) == a) {
                    ++rvCount;
                    break;
                }
            }
        }
        cout << n - rvCount << endl;
    }
    return 0;
}
