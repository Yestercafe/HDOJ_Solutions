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
        maxc = 'a';
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
