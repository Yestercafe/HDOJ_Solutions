#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> judges;
        while (n--) {
            int judge;
            cin >> judge;
            judges.insert(lower_bound(begin(judges), end(judges), judge), judge);
        }

        int sum = 0;
        for (int i = 1; i < judges.size() - 1; ++i) {
            sum += judges.at(i);
        }
        cout << sum / (judges.size() - 2) << '\n';
    }

    return 0;
}
