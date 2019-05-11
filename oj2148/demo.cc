#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n, pos;
            cin >> n >> pos;
            vector<int> lst;
            int lele_score;

            for (int k = 1; k <= n; ++k) {
                int tmp;
                cin >> tmp;
                if (k == pos) {
                    lele_score = tmp;
                }
                lst.push_back(tmp);
            }

            sort(begin(lst), end(lst), greater<int>());

            int i;
            for (i = 0; i < lst.size(); ++i) {
                if (lst[i] == lele_score) {
                    break;
                }
            }

            cout << i << '\n';
        }
    }

    return 0;
}
