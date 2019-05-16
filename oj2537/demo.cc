#include <iostream>
#include <cassert>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int r = 0, y = 0;
        char ball;
        while (n--) {
            cin >> ball;
            switch (ball) {
            case 'r': case 'R':
                ++r;
                break;
            case 'y': case 'Y':
                ++y;
                break;
            default:
                break;
            }
        }

        switch (ball) {
        case 'b': case 'B':
            if (r == 7) {
                cout << "Red\n";
            } else {
                cout << "Yellow\n";
            }
            break;
        case 'l': case 'L':
            if (y == 7) {
                cout << "Yellow\n";
            } else {
                cout << "Red\n";
            }
            break;
        default:
            break;
        }
    }

    return 0;
}
