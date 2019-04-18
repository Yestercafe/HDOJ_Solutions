#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        while (n--) {
            int a, b, t;
            cin >> a >> b >> t;
            int ac, bc;
            ac = t / a * a;
            bc = t / b * b;
            if (ac > bc) {
                cout << "Sempr!\n";
            } else if (ac < bc) {
                cout << "Xiangsanzi!\n";
            } else {
                cout << "Both!\n";
            }
        }
    }

    return 0;
}
