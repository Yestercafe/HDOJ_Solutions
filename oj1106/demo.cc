#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string line;
    while (getline(cin, line)) {
        vector<string> vec;
        
        string one;
        string::size_type max_size = 0;
        for (const auto &c: line) {
            if (c == '5') {
                if (!one.empty()) {
                    if (one.size() > max_size) {
                        max_size = one.size();
                    }
                    vec.push_back(one);
                    one.clear();
                }
                continue;
            } else {
                one.push_back(c);
            }
        }
        if (!one.empty()) {
            if (one.size() > max_size) {
                max_size = one.size();
            }
            vec.push_back(move(one));
        }

        vector<int> ress;
        for (const auto &s: vec) {
            int num;
            sscanf(s.c_str(), "%d", &num);
            ress.push_back(move(num));
        }

        sort(ress.begin(), ress.end(), less<int>());

        for (int i = 0; i < ress.size(); ++i) {
            cout << ress.at(i);
            if (i == ress.size() - 1) {
                cout << '\n';
            } else {
                cout << ' ';
            }
        }
    }

    return 0;
}