#include <iostream>
#include <vector>
#include <map>
#include <utility> // for std::make_pair
#include <string>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    map<string, int> list;
    string str;
    int n;
    while (cin >> n) {
        if (n == 0) break;
        while (--n >= 0) {
            cin >> str;
            auto search = list.find(str);
            if (search != list.end()) {
                ++search->second;
            } else {
                list.emplace(make_pair(str, 0));
            }
        }
        auto max = list.begin();
        for (auto i = list.begin(); i != list.end(); ++i) {
            if (max->second < i->second) {
                max = i;
            }
        }
        cout << max->first << endl;
        list.clear();
    }

    return 0;
}
