#include <iostream>
#include <cstdio>
#include <cmath>

int main(void)
{
    using namespace std;
    char sg;
    int a, b;
    int n, resi;
    double res;
    cin >> n;
    while (--n >= 0) {
        cin >> sg >> a >> b;
        switch (sg) {
            case '+':
                cout << a + b;
                break;
            case '-':
                cout << a - b;
                break;
            case '*':
                cout << a *  b;
                break;
            case '/':
                res = (double)a / (double)b;
                resi = a / b;
                if ((double)resi == res)
                    cout << resi;
                else
                    printf("%.2lf", floor(res * 100. + .5) / 100.);
        }
        cout << endl;
    }
    return 0;
}
