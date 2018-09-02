#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

float pow2(float);
void dist(float x1, float y1, float x2, float y2);

int main(void)
{
    float x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        dist(x1, y1, x2, y2);
    }
    return 0;
}

float pow2(float a)
{
    return a * a;
}

void dist(float x1, float y1, float x2, float y2)
{
    printf("%.2f\n", sqrt(pow2(x1 - x2) + pow2(y1 - y2)));
}
