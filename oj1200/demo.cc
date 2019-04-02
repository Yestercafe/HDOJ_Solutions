#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int width;
    while (cin >> width) {
        if (width == 0) break;
        string line;
        cin >> line;
        bool isRev = false;
        vector<string> vec (int(ceil(line.size() / width)), string());


        for (auto index = 0, i = 0; index != vec.size(); ++index) {
            for (int j = 0; j < width; ++j) {
                if (isRev) {
                    vec[index].insert(vec[index].begin(), line[i]);
                } else {
                    vec[index].push_back(line[i]);
                }
                ++i;
                if (i >= line.size())
                    break;
            }
            isRev = !isRev;
        }

        for (int i = 0; i < width; ++i) {
            for (const auto &str: vec) {
                if (i < str.size())
                    cout << str[i] << flush;
            }
        }
        cout << '\n';
    }

    return 0;
}
