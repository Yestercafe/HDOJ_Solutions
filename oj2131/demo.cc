#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char target;
    string word;
    while (cin >> target >> word) {
        target = tolower(target);
        int stat = 0;
        for (const auto &ch: word) {
            if (ch == target || tolower(ch) == target) {
                ++stat;
            }
        }
        cout << fixed << setprecision(5) << (double)stat / word.size() << endl;
    }


    return 0;
}
