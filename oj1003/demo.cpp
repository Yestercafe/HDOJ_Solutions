#include <iostream>
#include <limits>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int k = 1; k <= t; ++k) {
        int n;
        cin >> n;

        int maxsum = numeric_limits<int>::min(), downer = 1, upper = 1;
        int sum = 0, max = maxsum, maxpos;
        int recordpos = 1;
        for (int i = 0; i < n; ++i) {
            int c;
            cin >> c;

            if (c > max) {
                max = c;
                maxpos = i + 1;
            }
            max = max > c ? max : c;

            sum += c;
            if (sum < 0) {  // <= 0
                sum = 0;
                recordpos = i + 2;
            }

            if (maxsum < sum) {
                maxsum = sum;
                downer = recordpos;
                upper = i + 1;
            }
        }

        if (max <= 0) {
            maxsum = max;
            downer = upper = maxpos;
        }

        cout << "Case " << k << ":" << endl
             << maxsum << " " << downer << " " << upper << endl;
        if (k != t)
            cout << endl;
    }

    return 0;
}
