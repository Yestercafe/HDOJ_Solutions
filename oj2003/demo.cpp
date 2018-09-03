#include <iostream>
#include <cstdio>
#include <cmath>

int main(void)
{
    using namespace std;
    double a;
    while(cin >> a) {
        double re = a >= 0.0f ? a : -a;
        printf("%.2f\n", floor(re * 100.f + 0.5f) / 100.f);
    }

    return 0;
}
