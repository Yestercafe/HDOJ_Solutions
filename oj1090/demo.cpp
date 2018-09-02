#include <iostream>

int main(void)
{
    using namespace std;
    int n;
    int a, b;
    cin >> n;
    while(--n >= 0) {
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
