#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    while (getline(cin, line)) {
        for (auto &c: line) {
            if (c == '5') {
                c = ' ';
            }
        }
        stringstream ss {line};
        vector<int> vec;
        int n;
        while (ss >> n) {
            vec.push_back(n);
        }
        sort(vec.begin(), vec.end(), less<int>());

        for (int i = 0; i < vec.size(); ++i) {
            cout << vec.at(i);
            if (i == vec.size() - 1) {
                cout << '\n';
            } else {
                cout << ' ';
            }
        }
    }

    return 0;
}