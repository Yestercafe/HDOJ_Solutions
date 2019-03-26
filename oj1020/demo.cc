#include <iostream>
#include <string>
#include <iterator>
#include <sstream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        while (n--) {
            string str;
            cin >> str;

            auto bg = str.begin(), ed = str.begin();
            while (ed != str.end()) {
                if (*ed != *bg) {
                    auto diff (distance(bg, ed));
                    if (diff == 1) {
                        cout << *bg;
                    } else {
                        cout << diff << *bg;
                    }
                    bg = ed;
                }
                ++ed;
            }
            auto diff (distance(bg, ed));
            if (diff == 1) {
                cout << *bg;
            } else {
                cout << diff << *bg;
            }
            cout << endl;
        }
    }

    return 0;
}
