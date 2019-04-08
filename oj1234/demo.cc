// 这题注意一下比较时间串，直接按字符串字典序就好了。
// 起初使用的是写了一个时间类，重载了operator<，然后不知道哪里出问题WA了。
// 后看了dis直接换用了字典序。
#include <iostream>
#include <string>
#include <tuple>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            tuple<string, string, string> open ({}, {"25"}, {}),
                close ({}, {}, {});
            int n;
            cin >> n;
            while (n--) {
                string name, start, end;
                cin >> name >> start >> end;

                if (start < get<1>(open)) {
                    open = make_tuple(name, start, end);
                }
                if (end > get<2>(close)) {
                    close = make_tuple(name, start, end);
                }
            }

            cout << get<0>(open) << " " << get<0>(close) << endl;
        }
    }

    return 0;
}
