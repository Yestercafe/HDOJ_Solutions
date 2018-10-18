//再次提醒上题！
#include <iostream>
#include <cstdint>

int64_t pow3(int n) {
    int64_t res = 1;
    for (int i = 0; i < n; ++i) {
        res *= 3;
    }
    return res;
}

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a;
    while (--n >= 0) {
        cin >> a;
        cout << pow3(a) << endl;
    }
    return 0;
}
