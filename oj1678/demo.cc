#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> vec;
            while (n--) {
                int tmp;
                cin >> tmp;
                vec.insert(upper_bound(begin(vec), end(vec), tmp), tmp);
            }

            int discount = 0;
            for (int i = vec.size() % 3; i < vec.size(); i += 3) {
                discount += vec[i];
            }
            cout << discount << '\n';
        }
    }

    return 0;
}
