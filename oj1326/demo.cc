#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int loopCount = 0;
    int n;
    while (cin >> n) {
        if (n == 0) break;
        ++loopCount;

        vector<int> vec;
        int a;
        int avg = 0;
        for (int _ = 0; _ < n; ++_) {
            cin >> a;
            vec.push_back(a);
            avg += move(a);
        }
        avg /= n;

        int count = 0;
        for (const auto &c: vec) {
            if (c > avg)
                count += c - avg;
        }

        cout << "Set #" << loopCount << endl
             << "The minimum number of moves is " << count << "." << endl
             << endl;
    }

    return 0;
}
