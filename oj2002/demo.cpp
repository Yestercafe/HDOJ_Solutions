#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.1415927

int main(void)
{
    using namespace std;
    double r;
    while (cin >> r) {
        double s = r / 3.0f * r * r * 4.0f * PI;
        printf("%.3f\n", floor(s * 1000.0f + .5f) / 1000.0f);
    }
    return 0;
}
