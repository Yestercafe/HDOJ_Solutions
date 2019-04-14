#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m) {
        int min = -1;
        while (n--) {
            int tmp;
            cin >> tmp;
            if (min == -1 || min > tmp)
                min = tmp;
        }
        cout << m / min << '\n';
    }

    return 0;
}
