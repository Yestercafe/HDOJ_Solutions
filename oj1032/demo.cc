// 简单打表，具体问题详见下面的注释
#include <iostream>
#include <cstdint>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int lst[1000000];
    lst[0] = 0;
    for (int64_t i = 1; i < 1000000; ++i) {
        auto n = i;
        int step = 0;
        while (n != 1) {
            if (n < i) {
                step += lst[n];
                break;
            }
            if (n % 2)
                n = 3 * n + 1;
            else
                n = n / 2;
            ++step;
        }
        lst[i] = step;
    }

    // copy(begin(lst), end(lst), ostream_iterator<int>(cout, ", "));

    int a, b;
    while (cin >> a >> b) {
        auto max = lst[a];
        cout << a << " " << b << " ";

        // 我 vs 你八辈子祖宗
        if (a > b) swap(a, b);

        for (int i = a; i <= b; ++i) {
            max = max > lst[i] ? max : lst[i];
        }
        cout << max + 1 << endl;
    }

    return 0;
}
