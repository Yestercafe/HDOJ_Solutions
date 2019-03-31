#include <stdio.h>

unsigned gcd(const unsigned a, const unsigned b) {
    return (b > 0) ? gcd(b, a % b) : a;
}

int main(void)
{
    int step, mod;
    while (~scanf("%d%d", &step, &mod)) {
        printf("%10d%10d    ", step, mod);
        if (gcd(step, mod) == 1) {
            puts("Good Choice");
        } else {
            puts("Bad Choice");
        }
        putchar('\n');
    }
    return 0;
}
