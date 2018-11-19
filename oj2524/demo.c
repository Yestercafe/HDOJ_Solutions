#include <stdio.h>

int main(void)
{
    int n, m;
    int t;
    scanf("%d", &t);
    while (--t >= 0) {
        scanf("%d%d", &n, &m);
        int point = (n + 1) * (m + 1);
        printf("%d\n", point * (point - n - m - 1) / 4);
    }
    return 0;
}
