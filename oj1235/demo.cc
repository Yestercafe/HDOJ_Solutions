#include <iostream>
#include <vector>
#include <cstring>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int arr[101];
        memset(arr, 0, 101 * sizeof(int));
        while (n--) {
            int score;
            cin >> score;
            ++arr[score];
        }
        int score;
        cin >> score;
        cout << arr[score] << '\n';
    }

    return 0;
}
