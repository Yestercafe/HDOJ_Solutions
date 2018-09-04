//hint : 换行别忘记了！
#include <cstdio>
#include <iostream>
#include <cmath>

int main(void)
{
    using namespace std;
    double a, res = 0;
    for (int i = 0; i != 12; ++i) {
        cin >> a;
        res += a;
    }
    res /= 12.0;
    printf("$%.2lf\n", floor(res * 100. + .5) / 100.);
    return 0;
}
