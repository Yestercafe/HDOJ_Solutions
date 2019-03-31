// 这题除了英文文本，从头水到尾
#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    const int stdHeight = 168;
    int h[3];
    while (cin >> h[0] >> h[1] >> h[2]) {
        int crashHeight = 0;
        for (int i = 0; i < 3; ++i) {
            if (h[i] < stdHeight) {
                crashHeight = h[i];
                break;
            }
        }
        if (crashHeight) {
            cout << "CRASH " << crashHeight << endl;
        } else {
            cout << "NO CRASH" << endl;
        }
    }

    return 0;
}
