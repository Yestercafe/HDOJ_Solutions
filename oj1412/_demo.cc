// 插值法。（自己编的名字）
// 看错题目了，以为可以有重复元素。
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <limits>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int basea, baseb;
    while (cin >> basea >> baseb) {
        int tmp;
        vector<int> a, b;
        while (basea--) {
            cin >> tmp;
            a.insert(upper_bound(begin(a), end(a), tmp), tmp);
        }
        while (baseb--) {
            cin >> tmp;
            b.insert(upper_bound(begin(b), end(b), tmp), tmp);
        }

        auto itra = a.begin();
        auto itrb = b.begin();
        bool firstIn = true;
        while (itra != a.end() || itrb != b.end()) {
            if (firstIn)
                firstIn = false;
            else
                cout << ' ';

            if (itra == a.end()) {
                cout << *itrb++;
                continue;
            }
            if (itrb == b.end()) {
                cout << *itra++;
                continue;
            }

            if (*itra > *itrb) {
                cout << *itrb++;
            } else {
                cout << *itra++;
            }
        }
        cout << '\n';
    }

    return 0;
}
