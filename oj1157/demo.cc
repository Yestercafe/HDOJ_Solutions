#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        vector<int> vec;
        while (n--) {
            int k;
            cin >> k;
            vec.push_back(move(k));
        }
        sort(vec.begin(), vec.end());
        cout << vec[(vec.size() - 1) / 2] << endl;
    }

    return 0;
}
