#include <bits/stdc++.h>
using namespace std;

int res;
string letters;
vector<bool> useds;
int chks[5];

int pow_int(const int a, const int p) {
    if (p == 0) return 1;
    else {
        int ret = 1;
        for (int i = 0; i < p; ++i) {
            ret *= a;
        }
        return ret;
    }
}

bool dfs(int depth) {
    if (depth >= 5) {
        if (chks[0] - pow_int(chks[1], 2) + pow_int(chks[2], 3) -
            pow_int(chks[3], 4) + pow_int(chks[4], 5) == res) {
                return true;
        } else {
            return false;
        }
    }
    else {
        bool ret = false;
        for (int i = 0; !ret && i < letters.size(); ++i) {
            if (!useds[i]) {
                useds[i] = true;
                chks[depth] = letters[i] - 'A' + 1;
                ret |= dfs(depth + 1);
                useds[i] = false;
            }
        }
        if (ret) {
            return true;
        } else {
            return false;
        }
    }
}

int main()
{
    cin.tie(nullptr);
    while (cin >> res >> letters) {
        if (res == 0 && letters == "END") break;
        sort(begin(letters), end(letters), greater<char>());
        if (letters.size() < 5) {
            cout << "no solution\n";
            continue;
        }
        useds.assign(letters.size(), false);

        auto ret = dfs(0);
        if (ret) {
            for (const auto& c: chks) {
                cout << char(c + ('A' - 1));
            }
            cout << '\n';
        } else {
            cout << "no solution\n";
        }
    }

    return 0;
}