// 今天在STL Cookbook上看到了正则表达式库的用法，就想到了这题。于是用正则表达式AC。
#include <iostream>
#include <string>
#include <iterator>
#include <regex>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    while (cin >> t) {
        while (t--) {
            string line;
            cin >> line;
            const regex chk {R"(([a-zA-Z])\1*)"};
            sregex_token_iterator it {
                begin(line), end(line), chk, {0}
            };

            const sregex_token_iterator end_it {};
            for (; it != end_it; ++it) {
                string str {*it};
                if (str.size() == 1) {
                    cout << str;
                } else {
                    cout << str.size() << str.at(0);
                }
            }
            cout << '\n';
        }
    }

    return 0;
}
