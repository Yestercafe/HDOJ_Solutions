#include <cstdio>

int main(void)
{
    int a, b, e;
    while (~scanf("%d%d", &a, &b)) {
        e = 0;
        if (a == 0 && b == 0) break;
        e = a % b * 100;
        for (int i = 0, sym = 0; i < 100; ++i) {
            if ((e + i) % b == 0) {
                if (sym) putchar(' ');
                sym = 1;
                printf("%.2d", i);
            }
        }
        putchar('\n');
    }

    return 0;
}
