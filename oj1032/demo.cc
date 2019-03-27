#include <iostream>
#include <cstdint>

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
            if (n % 2)
                n = 3 * n + 1;
            else
                n = n / 2;
            ++step;
        }
        lst[i] = step;
    }

    // cout << "here" << endl;

    int a, b;
    while (cin >> a >> b) {
        int max = lst[a];
        for (int i = a; i <= b; ++i) {
            max = max > lst[i] ? max : lst[i];
        }
        cout << a << " " << b << " " << max + 1 << endl;
    }

    return 0;
}
