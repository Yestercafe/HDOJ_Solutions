#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
#include <iterator>
const int BOUND = 200 * 5;

int kagiri(const int n) {
    if (n > BOUND)
        return BOUND;
    else
        return n;
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        int n;
        while (t--) {
            cin >> n;
            vector<tuple<string, int, int>> milks;
            while (n--) {
                string name;
                int price, volume;
                cin >> name >> price >> volume;
                if (volume < 200)
                    continue;
                milks.push_back(make_tuple(move(name), price, volume));
            }

            sort(begin(milks), end(milks),
                [](const tuple<string, int, int> &lhs, const tuple<string, int, int> &rhs) -> bool {
                    const int avga = kagiri(get<2>(lhs)) / get<1>(lhs),
                          avgb = kagiri(get<2>(rhs)) / get<1>(rhs);
                    if (avga != avgb) {
                        return avga > avgb;
                    } else {
                        return get<2>(lhs) > get<2>(rhs);
                    }
                });

            cout << get<0>(milks.front()) << endl;
        }
    }

    return 0;
}
