#include <iostream>
#include <string>
#include <vector>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    string str;
    vector<size_t> maxPos = {0};
    while (cin >> str) {
        for (int i = 0; i < str.size(); ++i) {
            if (str[maxPos[0]] < str[i]) {
                maxPos.clear();
                maxPos.push_back(i);
            } else if (str[maxPos[0]] == str[i]) {
                maxPos.push_back(i);
            }
        }
        for (int i = 0, ii = 0; i < str.size(); ++i) {
            cout << str[i];
            if (i == maxPos[ii]) {
                cout << "(max)";
                ++ii;
            }
        }
        cout << endl;
        maxPos.clear();
    }
    return 0;
}
