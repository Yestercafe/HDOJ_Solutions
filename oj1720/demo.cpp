#include <cstdio>
#include <iostream>
#include <string>  //for STL 'string'

int main(void)
{
    using namespace std;
    string sa, sb;
    while (cin >> sa >> sb) {
        int a, b;
        sscanf(sa.c_str(), "%x", &a);
        sscanf(sb.c_str(), "%x", &b);
        cout << a + b << endl;
    }
    return 0;
}
