#include <iostream>

int main(void)
{
    using namespace std;
    long n;
    while (cin >> n) {
        if (n % 2) {
            cout << (n + 1) / 2 * n << endl << endl;
        } else {
            cout << n / 2 * (n + 1) << endl << endl;
        }
    }

    return 0;
}
