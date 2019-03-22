#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        while (n--) {
            int m;
            cin >> m;
            vector<int> vec;
            while (m--) {
                int a;
                cin >> a;
                vec.push_back(move(a));
            }
            sort(vec.begin(), vec.end(), [](const int& a, const int& b) {
                    return a < b;
                });
            for (int i = 0; i < vec.size(); ++i) {
                cout << vec[i];
                if (i == vec.size() - 1)
                    cout << endl;
                else
                    cout << ' ';
            }
        }
    }

    return 0;
}
