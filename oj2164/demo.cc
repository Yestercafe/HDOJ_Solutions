#include <iostream>
#include <cassert>

static int chk(const char ch1, const char ch2) {
    // S R P
    if (ch1 == ch2) {
        return 0;
    } else if (ch1 == 'S' && ch2 == 'R') {
        return -1;
    } else if (ch1 == 'S' && ch2 == 'P') {
        return 1;
    } else if (ch1 == 'R' && ch2 == 'S') {
        return 1;
    } else if (ch1 == 'R' && ch2 == 'P') {
        return -1;
    } else if (ch1 == 'P' && ch2 == 'S') {
        return -1;
    } else if (ch1 == 'P' && ch2 == 'R') {
        return 1;
    } else {
        assert(0);
        return 0;
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int p1, p2;
            p1 = p2 = 0;
            char ch1, ch2;

            while (n--) {
                cin >> ch1 >> ch2;
                auto ret = chk(ch1, ch2);
                if (ret > 0) {
                    ++p1;
                } else if (ret < 0) {
                    ++p2;
                }
            }

            if (p1 > p2) {
                cout << "Player 1\n";
            } else if (p1 < p2) {
                cout << "Player 2\n";
            } else {
                cout << "TIE\n";
            }
        }
    }

    return 0;
}
