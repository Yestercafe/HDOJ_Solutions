#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int main()
{
    ll arr[3];   // 忘记用64位整型wa了一次
    while (cin >> arr[0] >> arr[1] >> arr[2]) {
        sort(begin(arr), end(arr), less<int>());
        bool isLucky = false;
        if (arr[0] + arr[1] == arr[2]) {    // 1 + 2 = 3
            isLucky = true;
        } else if (arr[0] * arr[1] == arr[2]) {     // 2 * 3 = 6
            isLucky = true;
        } else if (arr[0] * arr[2] == arr[1]) {     // 0 * 1 = 0
            isLucky = true;
        } else if (arr[0] != 0 and arr[2] % arr[0] == arr[1]) {
            isLucky = true;
        } else if (arr[1] != 0 and arr[2] % arr[1] == arr[0]) {
            isLucky = true;
        } else if (arr[2] != 0 and arr[1] % arr[2] == arr[0]) {
            isLucky = true;
        } else if (arr[2] != 0 and arr[0] % arr[2] == arr[1]) {
            isLucky = true;
        } else {}

        if (isLucky) {
            cout << "oh,lucky!\n";
        } else {
            cout << "what a pity!\n";
        }
    }

    return 0;
}