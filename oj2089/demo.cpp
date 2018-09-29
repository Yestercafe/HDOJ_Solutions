#include <cstdio>
#include <cstring>

int main(void)
{
    char str[8];
    int a, b;
    int count = 0;
    int vaild[1000000];
    for (int i = 0; i < 1000000; ++i) {
        sprintf(str, "%d", i);
        for (int j = 0; str[j] != '\0'; ++j) {
            // if (str[j] == '4') {
            //     vaild[i] = 0;
            //     break;
            // }
            // else if (str[j] == '6') {
            //     if (str[j+1] != '\0' && str[j+1] == '2') {
            //         vaild[i] = 0;
            //         break;
            //     }
            //     else
            //         vaild[i] = 1;
            // }
            if (strstr(str, "4") || strstr(str, "62"))
                vaild[i] = 0;
            else
                vaild[i] = 1;
        }
    }
    while (~scanf("%d%d", &a, &b)) {
        if (a == b && a == 0) break;
        for (int i = a; i <= b; ++i) {
            count += vaild[i-1];
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}
