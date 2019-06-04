#include <bits/stdc++.h>
using namespace std;

static void init(vector<int> &vec) {
    int d = 1;
    int sum = 0;
    do {
        vec.push_back(sum);
        sum += d * d * d;
        d++;
    } while (sum <= 1000000000);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> pow3lst;
    init(pow3lst);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            auto bound = lower_bound(pow3lst.begin(), pow3lst.end(), n);
            cout << distance(pow3lst.begin(), bound) << '\n';
        }
    }
    return 0;
}