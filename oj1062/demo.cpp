//第一道卡了一会儿的题目，纪念一下。
#include <iostream>
#include <string>
using namespace std;

void reverse(string& s, int bg, int nd);

int main(void)
{
    int n;
    cin >> n;
    getchar();
    string str;
    while (--n >= 0) {
        getline(cin, str);
        for (int i = 0, begin = 0; i <= str.size(); ++i) {
            if (begin == -1)
                begin = i;
            if (str[i] == ' ' || str[i] == '\0') {
                reverse(str, begin, i - 1);
                begin = -1;
            }
        }
        cout << str << endl;
    }
    return 0;
}

void reverse(string& s, int bg, int nd)
{
    for (int i = bg; i < (bg + nd + 1) / 2; ++i) {
        s[i] ^= s[bg + nd - i] ^= s[i] ^= s[bg + nd - i];
    }
}
