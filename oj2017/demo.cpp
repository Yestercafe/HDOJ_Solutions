#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    string str;
    int n, count;
    cin >> n;
    while (--n >= 0) {
        count = 0;
        cin >> str;
        for (auto c: str) {
            if (c >= '0' && c <= '9')
                ++count;
        }
        cout << count << endl;
    }
    return 0;
}
