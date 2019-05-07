#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <cstdio>
using namespace std;

string str;

static int baseToDec(const int base) {
    int ret = 0;
    int power = 1;
    for (int i = str.size() - 1; i >= 0; --i) {
        ret += (str[i] - '0') * power;
        power *= base;
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        int ans = 0;
        while (n--) {
            string line;
            cin >> line;

            int base;
            int endPos = 0;
            while (line[++endPos] != '(')
                continue;

            str = line.substr(0, endPos);
            string sBase = line.substr(endPos + 1, line.size() - 1);
            stringstream ss;
            ss << sBase;
            ss >> base;

            ans += baseToDec(base);
        }
        cout << ans << '\n';
    }

    return 0;
}
