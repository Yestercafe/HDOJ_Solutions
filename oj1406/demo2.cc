// 双AC代码。这个代码是在知道10000以内的完数只有4个之后写的。
#include <iostream>

int main()
{
    using namespace std;
    const int perfection[4] = {6, 28, 496, 8128};

    int t;
    while (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            if (a > b)
                swap(a, b);
            int counter = 0;
            for (int i = 0; i < 4; ++i) {
                if (a <= perfection[i] && perfection[i] <= b)
                    ++counter;
            }
            cout << counter << endl;
        }
    }

    return 0;
}
