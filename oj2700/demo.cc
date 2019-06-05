#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string input;
    while (cin >> input) {
        if (input == "#") {
            break;
        }
        int count_one = 0;
        for (const auto &c: input) {
            if (c == '1')
                ++count_one;
        }
        cout << input.substr(0, input.size() - 1);
        if (input.back() == 'e') {
            if (count_one & 1) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else {
            if (count_one & 1) {
                cout << 0 << '\n';
            } else {
                cout << 1 << '\n';
            }
        }
    }

    return 0;
}