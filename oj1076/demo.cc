#include <iostream>

static bool chkLeap(const int yr) {
    if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0) {
        return true;
    } else {
        return false;
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        int yr, n;
        while (t--) {
            cin >> yr >> n;
            int count = 1;
            while (!chkLeap(yr))
                ++yr;
            for (; count <= n; yr += 4) {
                if (chkLeap(yr)) {
                    if (count == n)
                        cout << yr << endl;
                    ++count;
                }
            }
        }
    }

    return 0;
}
