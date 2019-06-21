#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int times;
    while (cin >> str) {
        scanf("%d", &times);
        assert(str.size() & 1);
        times %= 8;
        if (times < 0) {
            times += 8;
        }

        if (times == 4) {
            str = string(str.rbegin(), str.rend());
            times = 0;
        } else if (times == 3) {
            str = string(str.rbegin(), str.rend());
            times = 7;
        } else if (times == 2) {
            str = string(str.rbegin(), str.rend());
            times = 6;
        } else if (times == 1) {
            str = string(str.rbegin(), str.rend());
            times = 5;
        }

        switch (times) {
          case 0:
            cout << str << '\n';
            break;
          case 7:
            for (int i = 0; i < str.size(); ++i) {
                for (int spc = 0; spc < i; ++spc) {
                    cout << ' ';
                }
                cout << str.at(i) << '\n';
            }
            break;
          case 6:
            for (int i = 0; i < str.size(); ++i) {
                for (int spc = 0; spc < str.size() / 2; ++spc) {
                    cout << ' ';
                }
                cout << str.at(i) << '\n';
            }
            break;
          case 5:
            for (int i = 0; i < str.size(); ++i) {
                for (int spc = str.size() - 1 - i; spc > 0; --spc) {
                    cout << ' ';
                }
                cout << str.at(i) << '\n';
            }
            break;
          default:
            assert(0);
            break;
        }
    }

    return 0;
}