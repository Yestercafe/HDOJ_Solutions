#include <iostream>
using namespace std;

int main()
{
    int t;
    while (cin >> t) {
        while (t--) {
            string num;
            cin >> num;
            for (int i = 0; i < num.size(); i+=2) {
                swap(num[i], num[i + 1]);
            }
            cout << num << '\n';
        }
    }
    return 0;
}