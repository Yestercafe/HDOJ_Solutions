//一遍过，我佩服我自己
//一遍过，我佩服我自己
//一遍过，我佩服我自己
#include <iostream>
#include <string>
using std::string;

string getRound(string);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    string a, b;
    while (cin >> a >> b) {
        if (getRound(a) == getRound(b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

string getRound(string num)
{
    bool hasDot = false;
    for (auto c: num) {
        if (c == '.') {
            hasDot = true;
            break;
        }
    }
    if (!hasDot)
        return num;
    for (auto ri = num.rbegin(); ri != num.rend(); ++ri) {
        if (*ri == '0') {
            num.pop_back();
        } else if (!(*ri == '.')) {
            break;
        } else {
            num.pop_back();
            break;
        }
    }
    return num;
}
