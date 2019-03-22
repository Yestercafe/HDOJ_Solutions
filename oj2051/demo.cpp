#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        string reverse;
        while (n != 0) {
            reverse.push_back(n % 2 + '0');
            n /= 2;
        }
        for (auto itr = reverse.rbegin(); itr != reverse.rend(); ++itr) {
            cout << *itr;
        }
        cout << endl;
    }

    return 0;
}
