#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    int x, y, res;
    cin >> n;
    while (--n >= 0) {
        cin >> x >> y;
        x %= 100;
        y %= 100;
        res = x + y;
        res %= 100;
        cout << res << endl;        
    }
    return 0;
}
