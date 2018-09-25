#include <iostream>
#include <cstdint>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    int64_t fibb[51] = {0, 1};
    for (int i = 2; i <= 50; ++i) {
        fibb[i] = fibb[i - 1] + fibb[i - 2];
    }
    while (cin >> n) {
        if (n == -1) break;
        cout << fibb[n] << endl;
    }

    return 0;
}
