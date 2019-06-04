#include <bits/stdc++.h>
using namespace std;
using pii = pair<int, int>;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            while (cin >> n) {
                vector<pii> bag;
                while (n--) {
                    int a, b;
                    cin >> a >> b;
                    bag.push_back(make_pair(move(a), move(b)));
                }

                sort(bag.begin(), bag.end(), 
                    [](const pii &lhs, const pii &rhs) {
                        return lhs.first > rhs.first;
                    });

                while (!bag.empty()) {
                    auto &pr = bag.back();
                    string body (pr.first - 2, '-');
                    for (auto i = 0; i < pr.second; ++i) {
                        cout << ">+" << body << "+>" << '\n';
                    }
                    cout << '\n';
                    bag.pop_back();
                }
            }
        }
    }
    return 0;
}