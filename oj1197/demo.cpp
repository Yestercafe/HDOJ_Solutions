#include <iostream>

int sum10(int n);
int sum12(int n);
int sum16(int n);

int main(void)
{
    using namespace std;
    for (int n = 2992; n < 10000; ++n) {
        if (sum10(n) == sum12(n) && sum12(n) == sum16(n))
            cout << n << endl;
    }
    return 0;
}

int sum10(int n)
{
    if (n < 10)
        return n;
    else
        return n % 10 + sum10(n / 10);
}

int sum12(int n)
{
    if (n < 12)
        return n;
    else
        return n % 12 + sum12(n / 12);
}

int sum16(int n)
{
    if (n < 16) {
            return n;
    } else {
            return n % 16 + sum16(n / 16);
    }
}
