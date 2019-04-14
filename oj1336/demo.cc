#include <iostream>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    

    string str;
    while (cin >> str) {
        int sum = str.at(0) - 'a' + 1;
        bool isSorted = true;
        for (auto itr = str.begin() + 1; itr != str.end(); ++itr) {
            if (*itr <= *(itr - 1)) {
                isSorted = false;
                break;
            }

        }

        if (isSorted) {
            cout << sum << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}
