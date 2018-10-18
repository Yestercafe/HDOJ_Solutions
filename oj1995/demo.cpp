//黑历史！很容易看到我这个文件夹下使用了三种语言来编写这个题目。思路很早就想出来了，但是竟然死在超长整型的存储上！
//开始使用C语言使用long long型oj不给过，换用C++使用long型直接溢出了，换用Java使用大数类因为没装eclipse不太方便编译所以直接提交编译错误。
//最后想到使用标准库的int64_t。引以为戒！
#include <iostream>
#include <cstdint>

int64_t pow2(int n) {
    int64_t res = 1;
    for (int i = 0; i < n; ++i) {
        res *= 2;
    }
    return res;
}

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a, b;
    while (--n >= 0) {
        cin >> a >> b;
        cout << pow2(a - b) << endl;
    }
    return 0;
}
