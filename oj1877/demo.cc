#include <iostream>
#include <cstdint>
#include <string>
using namespace std;

string decToM(int64_t n, int m) {
    string ret;
    while (n >= m) {
        ret.insert(ret.begin(), n % m + '0');
        n /= m;
    }
    if (n != 0)
        ret.insert(ret.begin(), n + '0');
    return ret;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    int64_t a, b, res;
    while (cin >> m) {
        if (m == 0) break;
        cin >> a >> b;
        if (a + b == 0)
            cout << 0 << '\n';
        else
            cout << decToM(a + b, m) << '\n';
    }

    return 0;
}
