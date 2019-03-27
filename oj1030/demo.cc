#include <iostream>
#include <cmath>  // for sqrt and ceil

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int a, b;
    while (cin >> a >> b) {
        if (a == b) {
            cout << 0 << endl;
            continue;
        } else if (a > b) {
            swap(a, b);
        }

        int aLine = ceil(sqrt(a)),
            bLine = ceil(sqrt(b));
        // dirt: 0 is up, 1 is down
        int aDirt = (a % 2) ^ (aLine * aLine % 2),
            bDirt = (b % 2) ^ (bLine * bLine % 2);
        int aPosi = (a - (aLine - 1) * (aLine - 1) - 1) / 2,
            bPosi = (b - (bLine - 1) * (bLine - 1) - 1) / 2;

        cout << "posi: " << aPosi << " " << bPosi << endl;
        cout << "line: " << aLine << " " << bLine << endl;
        cout << "dirt: " << aDirt << " " << bDirt << endl;

        if (aDirt == bDirt) {

        } else {

        }

    }

    return 0;
}
