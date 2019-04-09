#include <iostream>
#include <algorithm>
#include <set>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    while (cin >> a) {
        if (a == -1) {
            break;
        } else {
            if (a == 0)
                continue;
            bool ext[100];
            for (auto &c: ext) {
                c = false;
            }
            set<int> vec;

            ext[a] = true;
            vec.insert(a);

            while (cin >> a) {
                if (a == 0)
                    break;
                ext[a] = true;
                vec.insert(a);
            }

            int counter = 0;
            for (const auto &c: vec) {
                if (c % 2 == 0 && ext[c / 2])
                    ++counter;
            }
            cout << counter << '\n';
        }
    }

    return 0;
}
