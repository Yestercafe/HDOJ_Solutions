#include <iostream>

int fakefib(int n);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
        if (n == 0)  break;
        cout << fakefib(n) << endl;
    }
    return 0;
}

int fakefib(int n)
{
    if (n > 4)
        return fakefib(n - 1) + fakefib(n - 3);
    else if (n >= 0 && n <= 4)
        return n;
    else
        return 0;
}
