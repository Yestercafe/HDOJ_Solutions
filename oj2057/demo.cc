#include <iostream>
#include <iomanip>
#include <cstdint>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int64_t a, b;
    while (cin >> hex >> a >> b) {
        int64_t sum = a + b;
        if (sum < 0) {
            sum = -sum;
            cout << "-" << setiosflags(ios::uppercase) << hex << sum << endl;
        } else {
            cout << setiosflags(ios::uppercase) << hex << sum << endl;
        }
    }

    return 0;
}
