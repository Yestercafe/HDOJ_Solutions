#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int arr[10][4];
    for (int i = 0; i < 10; ++i) {
        int multi = 1;
        for (int j = 0; j < 4; ++j) {
            multi *= i;
            arr[i][j] = multi % 10;
        }
    }

    int t;
    while (cin >> t) {
        int n;
        while (t--) {
            cin >> n;
            cout << arr[n % 10][(n - 1) % 4] << '\n';
        }
    }


    return 0;
}
