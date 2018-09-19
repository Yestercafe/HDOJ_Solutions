#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, a, b, sum = 0;
    vector<int> list;
    cin >> n;
    while (--n >= 0) {
        cin >> a >> b;
        list.push_back(1);
        for (int i = 2; i <= a / i; ++i) {
            if (a % i == 0) {
                list.push_back(i);
                if (i != a / i)
                    list.push_back(a / i);
            }
        }
        for (auto i: list) {
            sum += i;
        }
        if (sum == b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        list.clear();
        sum = 0;
    }

    return 0;
}
