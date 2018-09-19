#include <iostream>

int f(int);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    char ch;
    int n, a;
    cin >> n;
    while (--n >= 0) {
        cin >> ch >> a;
        cout << f(ch) + a << endl;
    }
    return 0;
}

int f(int ch)
{
    if (ch >= 'a' && ch <= 'z')
        return -ch + 'a' - 1;
    else
        return ch - 'A' + 1;
}
