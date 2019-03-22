#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
#define BOUND 1000000

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    array<int, BOUND> arr;
    arr[0] = 0;
    for (int k = 1; k < BOUND; ++k) {
        int tmp = k;
        bool yes = true;
        while (tmp != 0) {
            if (tmp % 100 == 62 || tmp % 10 == 4) {
                arr[k] = arr[k - 1] + 1;
                yes = false;
                break;
            }
            tmp /= 10;
        }
        if (yes) {
            arr[k] = arr[k - 1];
        }
    }

    int lower, upper;
    while (cin >> lower >> upper) {
        if (lower == 0 && upper == 0) break;
        cout << upper - lower + 1 - (arr[upper] - arr[lower - 1]) << endl;
    }

    return 0;
}
