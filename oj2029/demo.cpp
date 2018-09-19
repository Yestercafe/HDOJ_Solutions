#include <iostream>
#include <string>

int main(void) {
    using namespace std;
    ios::sync_with_stdio(false);
    string str;
    int n;
    cin >> n;
    getline(cin, str);
    while (--n >= 0) {
        getline(cin, str);  // 第一次就考虑到了可能会出现空格的问题，鼓励一下。（但是鼠标炸了提交了两次
        bool right = true;
        for (int i = 0; i < str.size()/ 2; ++i) {
            if (str[i] != str[str.size() - 1 - i]) {
                right = false;
                break;
            }
        }
        if (right)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
