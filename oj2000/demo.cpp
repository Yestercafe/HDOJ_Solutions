#include <iostream>
#include <cstdio>
using namespace std;

void sort(char a, char b, char c);

int main(void)
{
    char a, b, c;
    while(cin >> a >> b >> c) {
        sort(a, b, c);
    }
    return 0;
}

void sort(char a, char b, char c)
{
        int x = a, y, z = a;
        if (b < x) x = a; if (c < x) x = c;
        if (b > z) z = b; if (c > z) z = c;
        y = a + b + c - x - z;
        printf("%c %c %c\n", x, y, z);
}
