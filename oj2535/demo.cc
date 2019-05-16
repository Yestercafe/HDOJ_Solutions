#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> vec;
        for (int _ = 0; _ < n; ++_) {
            int a;
            cin >> a;
            vec.push_back(a);
        }

        sort(begin(vec), end(vec), less<int>());

        int min_sum = 0;
        for (int i = 0; i < n / 2 + 1; ++i) {
            min_sum += vec[i] / 2 + 1;
        }
        cout << min_sum << '\n';
    }

    return 0;
}
