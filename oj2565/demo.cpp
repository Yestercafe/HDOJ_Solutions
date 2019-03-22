#include <iostream>

int main(void)
{
    using namespace std;

    int t, n;
    cin >> n;
    while (--n >= 0) {
        cin >> t;
        for (int i = 0; i < t / 2; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << ' ';
        }
        cout << 'X';
        for (int j = 0; j < t - 2 * i - 2; ++j) {
            cout << ' ';
        }
        cout << 'X' << endl;
        }
        for (int i = 0; i < t / 2; ++i) {
            cout << ' ';
        }
        cout << 'X' << endl;

        for (int i = t / 2 - 1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << ' ';
        }
        cout << 'X';
        for (int j = 0; j < t - 2 * i - 2; ++j) {
            cout << ' ';
        }
            cout << 'X' << endl;
        }
        cout << endl;
    }

    return 0;
}
