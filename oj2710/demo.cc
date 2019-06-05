#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main()
{
    int t;
    while (cin >> t) {
        vector<pii> vec;
        while (t--) {
            int n;
            cin >> n;
            int a = n;
            int i = 2;
            for (; i <= a; ++i) {
                while (a % i == 0) {
                    a /= i;
                }
            }
            vec.push_back(make_pair(n, i));
        }

        sort(vec.begin(), vec.end(), 
            [](const pii &lhs, const pii &rhs) {
                return lhs.second > rhs.second;
            });
        
        cout << vec.front().first << '\n';
    }

    return 0;
}