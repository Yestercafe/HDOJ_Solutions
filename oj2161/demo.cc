#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int loopCount = 0;
    while (cin >> n) {
        ++loopCount;
        if (n <= 0) break;

        cout << loopCount << ": ";
        if (n == 1 || n == 2) {
            cout << "no\n";
        } else {
            int flag = false;
            for (int div = 2; div <= n / div; ++div) {
                if (n % div == 0) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                cout << "no\n";
            } else {
                cout << "yes\n";
            }
        }
    }

    return 0;
}
