#include <iostream>
#include <cstdint>
#include <limits>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int max = numeric_limits<int32_t>::min();
        while (n--) {
            int32_t score;
            cin >> score;
            max = max > score ? max : score;
        }
        cout << max << endl;
    }

    return 0;
}
