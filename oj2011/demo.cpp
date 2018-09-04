#include <iostream>
#include <cmath>
#include <cstdio>

int main(void)
{
    using namespace std;
    int n, m;
    double res;
    cin >> m;
    while(--m >= 0) {
        res = 0.0;
        cin >> n;
        ++n;
        while (--n > 0)
            res += n % 2 ? 1.0 / (double)n : -1.0 / (double)n;
        printf("%.2lf\n", floor(res * 100.0 + 0.5) / 100.0);
    }
    return 0;
}
