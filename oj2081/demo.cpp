#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    string number;
    while (--n >= 0) {
        cin >> number;
        cout << 6;
        for (int i = 6; i < number.size(); ++i) {
            cout << number[i];
        } cout << endl;
    }
    return 0;
}
