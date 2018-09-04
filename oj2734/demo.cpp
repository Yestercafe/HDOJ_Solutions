#include <iostream>

int main(void)
{
    using namespace std;
    string str;
    int res = 0;
    while (true) {
        getline(cin, str);
        if (str[0] == '#')
            break;
        for (int i = 0; i != str.size(); ++i) {
            if (str[i] == ' ')
                continue;
            else
                res += (i + 1) * (str[i] - 'A' + 1);
        }
        cout << res << endl;
        res = 0;
    }

    return 0;
}
