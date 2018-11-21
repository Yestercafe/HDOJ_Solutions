#include <iostream>
#include <map>
#include <utility>
#include <vector>
using namespace std;

map<int, char> dgtLst;

void initLst();
char getDigit(const int n);

int main(void)
{
    initLst();
    int n, r;
    while (cin >> n >> r) {
        if (n == 0) {
            cout << 0 << endl;
            continue;
        }
        if (n < 0) {
            n = -n;
            cout << '-';
        }
        vector<char> bits;
        while (n != 0) {
            bits.push_back(getDigit(n % r));
            n /= r;
        }
        for (auto itr = bits.rbegin(); itr != bits.rend(); ++itr)
            cout << *itr;
        cout << endl;
    }
    return 0;
}

void initLst()
{
    dgtLst.insert(make_pair(0, '0'));
    dgtLst.insert(make_pair(1, '1'));
    dgtLst.insert(make_pair(2, '2'));
    dgtLst.insert(make_pair(3, '3'));
    dgtLst.insert(make_pair(4, '4'));
    dgtLst.insert(make_pair(5, '5'));
    dgtLst.insert(make_pair(6, '6'));
    dgtLst.insert(make_pair(7, '7'));
    dgtLst.insert(make_pair(8, '8'));
    dgtLst.insert(make_pair(9, '9'));
    dgtLst.insert(make_pair(10, 'A'));
    dgtLst.insert(make_pair(11, 'B'));
    dgtLst.insert(make_pair(12, 'C'));
    dgtLst.insert(make_pair(13, 'D'));
    dgtLst.insert(make_pair(14, 'E'));
    dgtLst.insert(make_pair(15, 'F'));
}

char getDigit(const int n)
{
    return dgtLst.find(n)->second;
}
