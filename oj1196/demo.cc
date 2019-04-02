#include <iostream>

const int pow2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int bit = 0;
        while (n % 2 == 0) {
            n >>= 1;
            ++bit;
        }
        cout << pow2[bit] << endl;
    }

    return 0;
}
