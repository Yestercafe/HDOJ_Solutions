// 使用cin和getline写好像解决不了末尾换行的问题，提交了几次都是wa
// 故换C标准裤来写本题的输入输出部分，于是顺带着也把string换回了C风格字符串
#include <cstdio>
#include <cstring>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    while (--n >= 0) {
        char passwd[100];
        scanf("%s", passwd);
        if (strlen(passwd) < 8 || strlen(passwd) > 16) {
            puts("NO");
            continue;  // 纪念一下，因为这里写成break多了两个wa
        }
        else {
            int has[4] = {0, 0, 0, 0};
            for (int i = 0; i < strlen(passwd); ++i) {
                if (passwd[i] >= 'A' && passwd[i] <= 'Z')
                    has[0] = 1;
                else if (passwd[i] >= 'a' && passwd[i] <= 'z')
                    has[1] = 1;
                else if (passwd[i] >= '0' && passwd[i] <= '9')
                    has[2] = 1;
                else
                    has[3] = 1;
            }
            if (has[0] + has[1] + has[2] +  has[3] >= 3)
                puts("YES");
            else
                puts("NO");
        }
    }
    return 0;
}
