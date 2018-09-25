#include <cstdio>
#include <iostream>

int main(void)
{
    std::ios::sync_with_stdio(false);
    int n, m;
    double cur, max;
    scanf("%d", &n);
    while (--n >= 0) {
        scanf("%d", &m);
        scanf("%lf", &max);
        --m;
        while (--m >= 0) {
            scanf("%lf", &cur);
            if (max < cur) {
                max = std::move(cur);
            }
        }
        printf("%.2lf\n", max);  //事实证明每笔要去四舍五入
    }
    return 0;
}
