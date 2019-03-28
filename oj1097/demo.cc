#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int cycle[10] = {1, 1, 4, 4, 2, 1, 1, 4, 4, 2};
    vector<vector<int>> cycles;
    cycles.push_back({0});
    cycles.push_back({1});
    cycles.push_back({2, 4, 8, 6});
    cycles.push_back({3, 9, 7, 1});
    cycles.push_back({4, 6});
    cycles.push_back({5});
    cycles.push_back({6});
    cycles.push_back({7, 9, 3, 1});
    cycles.push_back({8, 4, 2, 6});
    cycles.push_back({9, 1});

    int a, b;
    while (cin >> a >> b) {
        if (b == 0) {
            cout << 1 << endl;
        } else {
            a %= 10;
            --b;
            b %= cycle[a];
            cout << cycles[a][b] << endl;
        }
    }

    return 0;
}
