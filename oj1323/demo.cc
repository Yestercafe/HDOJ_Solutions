#include <cstdio>

int main()
{
    // using namespace std;
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;
    puts("PERFECTION OUTPUT");
    while (~scanf("%d", &n)) {
        if (n == 0) break;
        int sum = 0;
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0)
                sum += i;
        }
        printf("%5d  ", n);
        if (sum == n) {
            puts("PERFECT");
        } else if (sum > n) {
            puts("ABUNDANT");
        } else {
            puts("DEFICIENT");
        }
    }
    puts("END OF OUTPUT");


    return 0;
}
