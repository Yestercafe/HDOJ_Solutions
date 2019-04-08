#include <iostream>
#include <string>
#include <array>
#include <cctype>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    while (getline(cin, line)) {
        array<size_t, 26> counter;
        counter.fill(0);

        for (const auto &ch: line) {
            if (islower(ch)) {
                ++counter[ch - 'a'];
            }
        }

        for (char ch = 'a'; ch <= 'z'; ++ch) {
            cout << ch << ":" << counter[ch - 'a'] << '\n';
        }
        cout << '\n';
    }

    return 0;
}
