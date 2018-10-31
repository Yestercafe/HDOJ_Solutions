#include <cstdio>
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    int n;
    scanf("%d", &n);
    while (--n >= 0) {
        char origin[14];
        char point[12];
        char lim[12];
        char unlim[12];
        char *cur = lim;
        scanf("%s", origin);
        strcpy(point, &origin[2]);
        puts(point);
        for (int i = 0; i < strlen(point); ++i, ++cur) {
            if (point[i] == '(') {
                *cur = '\0';
                cur = unlim;
                continue;
            } else {
                if (point[i] == ')' || point[i] == '\0') {
                    cout << i << endl;
                    *cur = '\0';
                    break;
                } else {
                    *cur = point[i];
                    putchar(*cur);
                }
            }
        }
        puts(lim);
        puts(unlim);
    }

    return 0;
}
