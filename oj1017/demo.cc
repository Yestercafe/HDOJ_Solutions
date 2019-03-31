#include <iostream>

static bool foo(const int a, const int b, const int m) {
    if ((a * a + b * b + m) % (a * b) == 0)
        return true;
    else
        return false;
}

int main() {
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    while (cin >> t) {
        for (int _ = 0; _ < t; ++_) {
            int n, m;
            int loopCount = 0;
            while (cin >> n >> m) {
                if (n == 0 && m == 0) break;
                ++loopCount;
                int count = 0;
                for (int b = 1; b < n; ++b) {
                    for (int a = 1; a < b; ++a) {
                        if (foo(a, b, m))
                            ++count;
                    }
                }
                cout << "Case " << loopCount << ": " << count << endl;
            }

            if (_ != t - 1)
                cout << endl;
        }
    }

    return 0;
}
