// 这题如果记得没错，应该在洛谷新手村做过
#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    double length;
    while (cin >> length) {
        if (length == 0.) break;
        double sum = 0.;
        int n = 1;
        while (sum < length) {
            ++n;
            sum += 1. / n;
        }
        cout << n - 1 << " card(s)" << endl;
    }

    return 0;
}
