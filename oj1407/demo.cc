#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    int n;
    while (cin >> n) {
        const int bound = int(sqrt(n) + 1);
        for (int a = 1; a <= bound; ++a) {
            for (int b = a; b <= bound; ++b) {
                for (int c = b; c <= bound; ++c) {
                    if (a * a + b * b + c * c == n) {
                        cout << a << " " << b << " " << c << '\n';
                        goto end;
                    }
                }
            }
        }
        end:;
    }

    return 0;
}
