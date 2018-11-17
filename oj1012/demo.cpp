#include <cstdio>

int main(void) {
    double fact = 1.0;
    double e = fact;
    int n = 0;
    printf("n e\n- -----------\n");
    printf("%d %lg\n", n, fact);
    for (n = 1; n <= 2; ++n) {
        fact /= n;
        e += fact;
        printf("%d %lg\n", n, e);
    }
    for (; n <= 9; ++n) {
        fact /= n;
        e += fact;
        printf("%d %.9lf\n", n, e);
    }
    return 0;
}
