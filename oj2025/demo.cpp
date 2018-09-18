#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    string str;
    char maxc;
    while (cin >> str) {
        maxc = 'a';  //讲真这行是我抄的，完全搞不懂为什么是从a开始计起的
        for (auto c: str)
            maxc = c > maxc ? c : maxc;
        for (auto c: str) {
            cout << c;
            if (c == maxc) cout << "(max)";
        }
        cout << endl;
    }
    return 0;
}
