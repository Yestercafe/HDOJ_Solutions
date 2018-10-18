#include <stdio.h>

static long powl2(int n) {
    long res = 1;
    for (int i = 0; i < n; ++i) {
        res *= 2l;
    }
    return res;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int a, b;
    while (--n >= 0) {
        scanf("%d%d", &a, &b);
        printf("%ld\n", powl2(a - b));
    }
    return 0;
}
