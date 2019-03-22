#include <iostream>

int main(void) {
    using namespace std;

    int t;
    cin >> t;

    while (--t >= 0) {
        int n, m;
        cin >> n >> m;

        double selc = 1.;
        for (int i = 0; i < m; ++i) {
            selc *= double(n - i);
            selc /= double(i + 1);
        }

        cout << int(selc) << endl;
    }


    return 0;
}
