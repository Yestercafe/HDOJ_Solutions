#include <iostream>
#include <limits>

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
            int min = numeric_limits<int>::max(),
                max = numeric_limits<int>::min();
            while (n--) {
                int tmp;
                cin >> tmp;
                min = tmp < min ? tmp : min;
                max = tmp > max ? tmp : max;
            }
            cout << (max - min) * 2 << '\n';
        }
    }

    return 0;
}
