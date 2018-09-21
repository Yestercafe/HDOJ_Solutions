// 今天，我也是体验过Unlimited Presentation Error Works的男人了
#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    char ch;
    int n = -1;
    while (cin >> ch) {
        if (ch == '@') break;
        if (n != -1) cout << endl;
        cin >> n;
        for (int i = 0; i < n - 1; ++i) cout << ' ';
        cout << ch;
        cout << endl;
        for (int i = 1; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) cout << ' ';
            cout << ch;
            for (int j = 0; j < 2 * i - 1; ++j) cout << ' ';
            cout << ch << endl;
        }
        if (n > 1) {
            for (int i = 0; i < 2 * n - 1; ++i)
                cout << ch;
            cout << endl;
        }
    }
    return 0;
}
