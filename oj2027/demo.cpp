#include <iostream>
#include <string>
#include <cstdio>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int na, ne, ni, no, nu;
    string str;
    int n;
    cin >> n;
    getline(cin, str);
    while (--n >= 0) {
        getline(cin, str);
        na = ne = ni = no = nu = 0;
        for (auto c: str) {
            switch (c) {
                case 'A': case 'a':
                    ++na;
                    break;
                case 'E': case 'e':
                    ++ne;
                    break;
                case 'I': case 'i':
                    ++ni;
                    break;
                case 'O': case 'o':
                    ++no;
                    break;
                case 'U': case 'u':
                    ++nu;
                    break;
                default:
                    break;
            }
        }
        cout << "a:" << na << endl
             << "e:" << ne << endl
             << "i:" << ni << endl
             << "o:" << no << endl
             << "u:" << nu << endl;
        if (n) cout << endl;
    }
    return 0;
}
