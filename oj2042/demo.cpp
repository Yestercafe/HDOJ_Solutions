#include <iostream>

int sheep(int);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, a;
    cin >> n;
    while (--n >= 0) {
        cin >> a;
        cout << sheep(a) << endl;
    }
    return 0;
}

int sheep(int n)
{
    if (n > 0)
        return (sheep(n - 1) - 1) * 2;
    else if (n == 0)
        return 3;
    else
        return 0;
}
