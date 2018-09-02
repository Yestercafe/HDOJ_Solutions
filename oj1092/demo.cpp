#include <iostream>

int main(void)
{
    using namespace std;
    int n;
    int a, res = 0;
    do {
        cin >> n;
        if (n == 0)
            break;
        while (--n >= 0) {
            cin >> a;
            res += a;
        }
        cout << res << endl;
        res = 0;
    } while(true);
    return 0;
}
