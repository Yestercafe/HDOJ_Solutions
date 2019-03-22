#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);

    int a, b, n;
    while (cin >> a >> b >> n) {
        if (a == 0 && b == 0 && n == 0) break;
        int arr[49];
        arr[0] = arr[1] = 1;
        for (int i = 2; i < 49; ++i) {
            arr[i] = (a * arr[i - 1] + b * arr[i - 2]) % 7;
        }
        cout << arr[(n - 1) % 49] << endl;
    }

    return 0;
}
