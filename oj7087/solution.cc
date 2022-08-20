#include <iostream>
#include <functional>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> data;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            data.push_back(a);
        }
        sort(data.begin(), data.end());

        priority_queue<int> pq;
        for (int i = 0; i < m; ++i) {
            int a;
            cin >> a;
            pq.push(a);
        }

        bool succ = true;
        while (!data.empty()) {
            int rem = pq.top() - data.back();
            if (rem < 0) {
                succ = false;
                break;
            } else if (rem == 0) {
                data.pop_back();
                pq.pop();
            } else {
                data.pop_back();
                pq.pop();
                pq.push(rem);
            }
        }
        if (succ) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
