#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m) {
        vector<int> lst;
        for (int k = 1; k <= n; ++k) {
            lst.push_back(k);
        }
        for (int i = 0; i < m - 1; ++i) {
            next_permutation(lst.begin(), lst.end(), less<int>());
        }
        for (int i = 0; i < n; ++i) {
            cout << lst[i];
            if (i == n - 1) {
                cout << '\n';
            } else {
                cout << ' ';
            }
        }
    }

    return 0;
}