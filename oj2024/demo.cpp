#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    string name;
    int n;
    cin >> n;
    getchar(); //啧，又用了，不过还好过了
    while (--n >= 0) {
        bool vaild = true;
        getline(cin, name);  //之前真的没考虑到名字中间有空白字符的情况～
        //cout << name << endl;
        for (int i = 0; i < name.size(); ++i) {
            if (i == 0 && !(name[0] == '_' || isalpha(name[0]))) {
                vaild = false;
                break;
            }
            if (i != 0 && !(name[i] == '_' || isalpha(name[i]) || isdigit(name[i]))) {
                vaild = false;
                break;
            }
        }
        if (vaild)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
