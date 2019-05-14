#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, ith;
    while (cin >> n >> ith) {
        cout << fixed << setprecision(2) << 1. / n << '\n';
    }

    return 0;
}
