// 正式使用C++重写
#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    int n;
    cin >> n;
    getchar();
    while (--n >= 0) {
        string pw;
        cin >> pw;
        if (pw.size() < 8 || pw.size() > 16) {
            cout << "NO" << endl;
            continue;
        } else {
            int has[4] = {0, 0, 0, 0};
            for (auto c: pw) {
                if (c >= 'A' && c <= 'Z')
                    has[0] = 1;
                else if (c >= 'a' && c <= 'z')
                    has[1] = 1;
                else if (c >= '0' && c <= '9')
                    has[2] = 1;
                else
                    has[3] = 1;
            }
            if (has[0] + has[1] + has[2] +  has[3] >= 3)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
