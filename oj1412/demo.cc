#include <set>
#include <iostream>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int basea, baseb;
    while (cin >> basea >> baseb) {
        int tmp;
        set<int> st;
        int k = basea + baseb;
        while (k--) {
            cin >> tmp;
            st.insert(tmp);
        }

        bool firstIn = true;
        for (const auto &c: st) {
            if (firstIn)
                firstIn = false;
            else
                cout << ' ';
            cout << c;
        }
        cout << '\n';
    }

    return 0;
}
