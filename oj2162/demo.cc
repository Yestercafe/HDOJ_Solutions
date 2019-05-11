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

        int sum = 0;
        while (n--) {
            int tmp;
            cin >> tmp;
            sum += move(tmp);
        }

        cout << "Sum of #" << loopCount << " is "
             << sum << '\n';
    }

    return 0;
}
