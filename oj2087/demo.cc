#include <iostream>
#include <string>
using namespace std;

int main()
{
    string source, target;
    while (cin >> source)
    {
        if (source == "#")
            break;
        cin >> target;
        int count = 0;
        for (int i = 0; i < source.size() - target.size() + 1; ++i) {
            if (source.substr(i, target.size()) == target) {
                ++count;
                i += target.size() - 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}