#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    vector<int> vec;
    while (cin >> line) {
        string one;
        for (auto itr = line.begin(); itr != line.end(); ++itr) {
            if (*itr == '5') {
                if (!one.empty()) {
                    int res = stoi(one);
                    vec.push_back(move(res));
                    one.clear();
                }
            } else {
                one.push_back(*itr);
            }
        }
        if (!one.empty()) {
            int res = stoi(one);
            vec.push_back(move(res));
        }

        sort(vec.begin(), vec.end(), less<int>());

        for (auto itr = vec.begin(); itr != vec.end(); ++itr) {
            cout << *itr;
            if (itr == vec.end() - 1) {
                cout << '\n';
            } else {
                cout << ' ';
            }
        }
    }

    return 0;
}
