#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    bool firstIn = true;
    while (cin >> n) {
        if (n == 0) { break; }
        if (firstIn) {
            firstIn = false;
        } else {
            cout << '\n';
        }

        vector<int> vec;
        int avg = 0;
        for (int _ = 0; _ < n; ++_) {
            int a;
            cin >> a;
            avg += a;
            vec.push_back(move(a));
        }
        avg /= n;

        int sum = 0;
        for (const auto &c: vec) {
            if (c < avg) {
                sum += avg - c;
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
