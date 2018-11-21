#include <iostream>
#include <vector>
#include <algorithm>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);

    int sizea, sizeb;
    int tmp;

    while (cin >> sizea >> sizeb) {
        vector<int> a, b, r;

        if (sizea == sizeb && sizea == 0) break;
        for (int i = 0; i < sizea; ++i) {
            cin >> tmp;
            a.push_back(move(tmp));
        }
        for (int i = 0; i < sizeb; ++i) {
            cin >> tmp;
            b.push_back(move(tmp));
        }
        sort(a.begin(), a.end(),
            [](int l, int r) {
                return l < r;
            }
        );
        sort(b.begin(), b.end(),
            [](int l, int r) {
                return l < r;
            }
        );

        for (int i = 0, j = 0; i < a.size(); ++i) {
            if (j >= b.size()) {
                r.push_back(a[i]);
                continue;
            }
            while (b[j] < a[i])
                ++j;
            if (b[j] == a[i]) {
                ++j;
                continue;
            }
            else if (b[j] > a[i]) {
                r.push_back(a[i]);
            }
            else
                continue;
        }

        if (r.size() == 0) cout << "NULL" << endl;
        else {
            for (auto itr = r.begin(); itr != r.end(); ++itr) {
                cout << *itr << " ";
            }
            cout << endl;
        }

    }

    return 0;
}
