#include <iostream>
#include <cstdint>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    uint64_t a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        cout << a + b - 2 << endl;
    }

    return 0;
}
