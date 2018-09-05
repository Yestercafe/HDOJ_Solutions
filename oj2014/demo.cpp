#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    double* scores;
    while (cin >> n) {
        scores = new double[n];
        for (int i = 0; i < n; ++i)
            cin >> scores[i];
        qsort(scores, n, sizeof(double), [](const void* a , const void* b){
            return *(double *)a > *(double *)b ? 1 : -1;
        });
        double res = 0;
        for (int i = 1; i < n - 1; res += scores[i], ++i);
        printf("%.2lf\n", floor((res / (n - 2)) * 100. + .5) / 100.);
        delete scores;
    }
    return 0;
}
