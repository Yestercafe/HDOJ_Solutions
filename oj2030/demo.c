#include <stdio.h>

int main(void)
{
    int n;
    while (~scanf("%d", &n)) {
        getchar();
        int count = 0;
        while (n != 0) {
            char ch = getchar();
            if (ch == '\n') {
                // 我的主机环境Manjaro下atom默认编码是utf-8，一个汉字占3个字节，
                // 所以第一次提交这里是除以3的，结果WA；
                // 改成除以2就对了（鬼知道oj的系统是什么编码的，理论上Linux应该都是utf-8才对
                printf("%d\n", count / 2);
                --n;
                count = 0;
            }
            else {
                if (ch < 32 || ch > 127) {
                    ++count;
                }
            }
        }
    }
    return 0;
}
