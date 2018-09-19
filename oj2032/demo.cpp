#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    vector<int> pre, cur;
    int n;
    bool first = true;
    while (cin >> n) {
        cout << 1 << endl;
        pre.push_back(1);
        for (int max = 1; max < n; ++max) {
            cout << 1 << ' '; cur.push_back(1);
            for (int i = 1; i < max; ++i) {
                cout << pre[i - 1] + pre[i] << ' ';
                cur.push_back(pre[i - 1] + pre[i]);
            }
            cout << 1 << endl; cur.push_back(1);
            pre = move(cur);
        }
        cout << endl;
    }
    return 0;
}
