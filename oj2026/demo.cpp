#include <iostream>
#include <cctype>
#include <string>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    string str;
    while (getline(cin, str)) {
        str[0] = toupper(str[0]);
        for (int i = 1; i < str.size(); ++i) {
            if (str[i - 1] == ' ')
                str[i] = toupper(str[i]);
        }
        cout << str << endl;
    }

    return 0;
}
