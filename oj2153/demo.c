#include <stdio.h>

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == 0) break;
        if (n == 1) {
            printf("  1\n");
            continue;
        }

        for (int k = 1; k <= n; ++k) {
            printf("%3d", k);
        }
        putchar('\n');

        for (int i = 0; i < n - 2; ++i) {
            printf("%3d", 4 * (n - 1) - i);
            for (int l = 0; l < n - 2; ++l) {
                printf("   ");
            }
            printf("%3d\n", n + 1 + i);
        }

        for (int i = 0; i < n; ++i) {
            printf("%3d", 3 * n - 2 - i);
        }
        putchar('\n');
    }

    return 0;
}
