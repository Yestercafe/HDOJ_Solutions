#include <iostream>
#include <cstdint>
using namespace std;

int main()
{
    int64_t arr[22] = {
        [0] = 0,
        [1] = 0,
        [2] = 1
    };
    for (int i = 3; i < 22; ++i) {
        arr[i] = (i - 1) * (arr[i - 1] + arr[i - 2]);
    }
    
    int n, m, t;
    while (cin >> t) {
        while (t--) {
            cin >> n >> m;
            int64_t ans = 1;
            for (int i = 0; i < n - m; ++i) {
                ans = ans * (n - i) / (i + 1);
            }
            cout << ans * arr[m] << endl;
        }
    }

    return 0;
}