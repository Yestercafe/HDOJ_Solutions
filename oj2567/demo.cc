#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            string src, target;
            cin >> src >> target;
            cout << src.substr(0, src.size() / 2) << target
                << src.substr(src.size() / 2) << endl;
        }
    }
    return 0;
}