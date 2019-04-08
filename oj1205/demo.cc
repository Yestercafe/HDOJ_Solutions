#include <cstdio>
#include <cstdint>

int main()
{
    int t;
    while (~scanf("%d", &t)) {
        while (t--) {
            int n;
            scanf("%d", &n);
            int64_t sum = 0;
            int max = -1;
            while (n--) {
                int a;
                scanf("%d", &a);
                sum += a;
                if (a > max) {
                    max = a;
                }
            }
            puts((sum - max >= max - 1) ? "Yes" : "No");
        }
    }

    return 0;
}
