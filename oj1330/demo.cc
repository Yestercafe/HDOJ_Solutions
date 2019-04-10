#include <cstdio>
double arr[100000];

int main()
{
    double sum = 0.;
    for (int i = 1; i < 100000; ++i) {
        sum += .5 / i;
        arr[i] = sum;
    }

    int n;
    puts("# Cards  Overhang");
    while (~scanf("%d", &n)) {
        printf("%5d     %.3lf\n", n, arr[n]);
    }

    return 0;
}
