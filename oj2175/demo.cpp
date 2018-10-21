#include <iostream>
#include <cstdint>

int getStep(int64_t step, int n);
int64_t pow_(int n, int p) {
    if (p == 0) return 1;
    return n * pow_(n, p - 1);
}

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    int64_t m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        int res = getStep(m, n);
        cout << res << endl;
    }

    return 0;
}

int getStep(int64_t step, int n)
{
    static int64_t pn;
    pn = pow_(2, n - 1);
    if (step < pn) {
        return getStep(step, n - 1);
    } else if (step == pn) {
        return n;
    } else {
        return getStep(pn * 2 - step, n - 1);
    }
}
