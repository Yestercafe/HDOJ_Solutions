#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iterator>

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

            vector<int> vec;
            for (int _ = 0; _ < n; ++_) {
                int a;
                cin >> a;
                vec.push_back(move(a));
            }

            int min_sum = 10100000;
            int pos;
            for (int i = 0; i < n; ++i) {
                int sum = 0;
                for (const auto &c: vec) {
                    sum += int(abs(c - vec[i]));
                }

                if (sum < min_sum) {
                    min_sum = sum;
                    pos = i;
                }
            }

            cout << min_sum << '\n';
        }
    }

    return 0;
}
