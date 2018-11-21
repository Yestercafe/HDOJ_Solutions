#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        if ((n + 2) % 4 == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
