#include <iostream>
#include <string>
#include <vector>
#include <tuple>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    using tp = tuple<string, int, string, int>;

    int t, c;
    int loopCount = 0;
    while (cin >> t >> c) {
        ++loopCount;
        if (t == 0 && c == 0) break;
        string number, name;
        int score;
        vector<tp> vec;
        while (t--) {
            cin >> number >> name >> score;
            int num = stoi(number);
            vec.push_back(make_tuple(move(number), move(num)
                , move(name), move(score)));
        }

        switch (c) {
          case 1:
            sort(begin(vec), end(vec), [](const tp &lhs, const tp &rhs) {
                    return get<1>(lhs) < get<1>(rhs);
                });
            break;
          case 2:
            sort(begin(vec), end(vec), [](const tp &lhs, const tp &rhs) {
                    if (get<2>(lhs) != get<2>(rhs))
                        return get<2>(lhs) < get<2>(rhs);
                    else
                        return get<1>(lhs) < get<1>(rhs);
                });
            break;
          case 3:
            sort(begin(vec), end(vec), [](const tp &lhs, const tp &rhs) {
                  if (get<3>(lhs) != get<3>(rhs))
                      return get<3>(lhs) < get<3>(rhs);
                  else
                      return get<1>(lhs) < get<1>(rhs);
              });
            break;
          default:
            break;
        }

        cout << "Case " << loopCount << ":\n";
        for (const auto &t: vec) {
            cout << get<0>(t) << ' ' << get<2>(t) << ' ' << get<3>(t) << '\n';
        }
    }

    return 0;
}
