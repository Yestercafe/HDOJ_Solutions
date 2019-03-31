#include <iostream>
#include <cctype>
#include <string>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    string line;
    bool isStarted = false;
    while (getline(cin, line)) {
        if (line == "ENDOFINPUT")
            break;
        else if (line == "START")
            isStarted = true;
        else if (line == "END")
            isStarted = false;
        else {
            if (isStarted) {
                for (const auto& ch: line) {
                    if (isupper(ch)) {
                        cout << char('A' + (ch - 'A' + 26 - 5) % 26);
                    } else {
                        cout << ch;
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}
