#include <iostream>

int peach(int n, int d);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int d;
    while (cin >> d)
        cout << peach(1, d) << endl;
    return 0;
}

int peach(int n, int d)
{
    if (d == 1)
        return n;
    else
        return peach(n * 2 + 2, d - 1);
}
