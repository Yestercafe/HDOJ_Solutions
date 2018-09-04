#include <iostream>
#include <cstdio>

int main(void)
{
    using namespace std;
    int yr, mn, dy, dys = 0;
    int days[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (~scanf("%d/%d/%d", &yr, &mn, &dy)) {
        if ((yr % 4 == 0 && yr % 100 != 0) || yr % 400 == 0)
            days[1] = 29;
        else
            days[1] = 28;
        for (int i = 0; i < mn - 1; ++i) {
            dys += days[i];
        }
        dys += dy;
        cout << dys << endl;
        dys = 0;
    }

    return 0;
}