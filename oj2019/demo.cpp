#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, m, a;
    vector<int> vec;
    while (cin >> n >> m) {
        if (n == 0 && m == 0) break;
        while (--n >= 0) {
            cin >> a;
            vec.push_back(a);
        }
        int pos = vec.size();
        for (int i = 0; i < vec.size(); ++i) {
            if (vec[i] > m) {
                pos = i;
                break;
            }
        }
        for (int i = 0; i < vec.size(); ++i) {
            if (i != 0) cout << ' ';
            if (i == pos)
                cout << m << ' ' << vec[i];
            else
                cout << vec[i];
        }
        if (pos == vec.size())
            cout << ' ' << m << endl;
        else
            cout << endl;
        vec.clear();
    }

    return 0;
}
