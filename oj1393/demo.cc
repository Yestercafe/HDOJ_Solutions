#include <iostream>
#include <set>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int mn, d;
    while (cin >> mn >> d) {
        if (mn == 0 && d == 0) break;
        int step = 0;

        set<int> st;
        st.insert(mn);
        bool impos = false;

        while (mn != 0) {
            mn *= d + 1;
            mn %= 60;

            if (st.find(mn) != st.end()) {
                impos = true;
                break;
            } else {
                st.insert(mn);
            }
            ++step;
        }

        if (!impos)
            cout << step << '\n';
        else
            cout << "Impossible\n";
    }

    return 0;
}
