#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        int t, ans, cnt = 1;
        cin >> t;
        ans = t;
        --n;
        while (n--) {
            cin >> t;
            if (t == ans) ++cnt;
            else          --cnt;
            if (cnt == 0) {
                ans = t;
                cnt = 1;
            }            
        }
        cout << ans << endl;
    }

    return 0;
}