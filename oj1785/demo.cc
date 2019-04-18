#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <iomanip>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    using pdd = pair<double, double>;
    
    int t;
    while (cin >> t) {
        if (t < 0) break;
        double x, y;
        vector<pair<double, double>> vec;
        while (t--) {
            cin >> x >> y;
            vec.push_back(make_pair(x, y));
        }
        
        sort(vec.begin(), vec.end(), [](const pdd &lhs, const pdd &rhs) {
                return lhs.first / lhs.second > rhs.first / rhs.second;
            });
            
        bool firstIn = true;
        cout << fixed << setprecision(1);
        for (const auto &p: vec) {
            if (firstIn)
                firstIn = false;
            else
                cout << ' ';
            cout << p.first << ' ' << p.second;
        }
        cout << '\n';
    }
    
    return 0;
}