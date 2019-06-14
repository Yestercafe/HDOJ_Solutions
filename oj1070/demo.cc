#include <bits/stdc++.h>
using namespace std;
using tsii = tuple<string, int, int>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            while (cin >> n) {
                vector<tsii> vec;
                while (n--) {
                    string name;
                    int price;
                    int ml;
                    cin >> name >> price >> ml;
                    vec.push_back(make_tuple(name, price, ml));
                }

                sort(vec.begin(), vec.end(),
                    [](const tsii &lhs, const tsii &rhs) {
                        auto kagiri = [](int ml) -> int {
                            if (ml > 1000) {
                                ml = 1000;
                            }
                            ml = ml / 200 * 200;
                            return ml;
                        };
                        
                        int lAble = kagiri(get<2>(lhs));
                        int rAble = kagiri(get<2>(rhs));
                        double lRate = double(lAble) / get<1>(lhs);
                        double rRate = double(rAble) / get<1>(rhs);

                        if (lRate != rRate) {
                            return lRate > rRate;
                        } else {
                            return get<2>(lhs) > get<2>(rhs);
                        }
                    });
                
                // for (const auto &t: vec) {
                //     cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;
                // }

                cout << get<0>(vec.front()) << endl;
            }
        }
    }

    return 0;
}