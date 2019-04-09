#include <iostream>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int mm1, mm2;
    int rg1, rg2, rg3;
    while (cin >> mm1 >> mm2) {
        rg1 = rg2 = rg3 = 0;
        string cmd;
        cin >> cmd;
        for (auto itr = cmd.begin(); itr != cmd.end(); ++itr) {
            switch (*itr) {
            case 'A':
                rg1 = mm1;
                // mm1 = 0;
                break;
            case 'B':
                rg2 = mm2;
                // mm2 = 0;
                break;
            case 'C':
                mm1 = rg3;
                // rg3 = 0;
                break;
            case 'D':
                mm2 = rg3;
                // rg3 = 0;
                break;
            case 'E':
                rg3 = rg1 + rg2;
                break;
            case 'F':
                rg3 = rg1 - rg2;
                break;
            default:
                break;
            }
        }
        cout << mm1 << ',' << mm2 << '\n';
    }

    return 0;
}