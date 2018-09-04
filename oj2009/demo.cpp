#include <iostream>
#include <cmath>
#include <cstdio>

double sum(double m, int n);

int main(void)
{
    using namespace std;
    int m, n;
    while (cin >> m >> n) {
        double res = sum(m, n);
        printf("%.2lf\n", floor(res * 100.0 + 0.5) / 100.0);
    }
    return 0;
}

double sum(double m, int n)
{
    if (n != 1)
        return m + sum(sqrt(m), n-1);
    else
        return m;
}
