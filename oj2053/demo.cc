#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        int status = 0;
        for (int p = 1; p <= n; ++p) {
            if (n % p == 0)
                status ^= 1;  // 这个操作被我称作“按下开关”，也就是获得当前的逆状态
        }
        cout << status << '\n';
    }

    return 0;
}
