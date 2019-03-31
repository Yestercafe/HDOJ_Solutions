#include <iostream>
#include <string>
#include <iterator>
using namespace std;

const char xfromd[] = {
    '0', '1', '2', '3',
    '4', '5', '6', '7',
    '8', '9', 'A', 'B',
    'C', 'D', 'E', 'F'
};

static int xtod(const char x) {
    switch (x) {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
        default:  return 16;
    }
}

static char dtox(const int d) {
    return xfromd[d];
}

static int sign(char sgn) {
    if (sgn == '+')
        return 1;
    else if (sgn == '-')
        return 0;
    else
        return -1;
}

static int compBign(const string& a, const string& b) {
    if (a.size() != b.size())
        return a.size() > b.size() ? 1 : -1;
    else {
        if (a == b)
            return 0;
        else if (a > b)
            return 1;
        else
            return -1;
    }
}

string addBign(const string&, const string&);
string subBign(const string&, const string&);

int main() {
    ios::sync_with_stdio(false);

    string a, b;
    while (cin >> a >> b) {
        int asgn = sign(a[0]), bsgn = sign(b[0]);
        if (asgn != -1)
            a.erase(begin(a));
        else
            asgn = 1;
        if (bsgn != -1)
            b.erase(begin(b));
        else
            bsgn = 1;

        if (asgn == bsgn) {
            if (asgn == 0)
                cout << '-';
            cout << addBign(a, b) << endl;
        } else {
            int cmp = compBign(a, b);
            if (cmp == 0)
                cout << 0 << endl;
            else if (cmp == 1) {
                if (asgn == 0)
                    cout << '-';
                cout << subBign(a, b) << endl;
            } else {
                if (bsgn == 0)
                    cout << '-';
                cout << subBign(b, a) << endl;
            }
        }
    }

    return 0;
}

string addBign(const string& a, const string& b)
{
    string res;
    auto aitr = a.rbegin(), bitr = b.rbegin();
    bool upd = false;
    while (aitr != a.rend() || bitr != b.rend()) {
        int bit = 0;
        if (aitr != a.rend()) bit += xtod(*aitr);
        if (bitr != b.rend()) bit += xtod(*bitr);
        if (upd)            bit += 1;
        upd = false;
        if (bit >= 16) {
            bit -= 16;
            upd = true;
        }
        res.insert(begin(res), dtox(bit));
        if (aitr != a.rend()) ++aitr;
        if (bitr != b.rend()) ++bitr;
    }
    if (upd) {
        res.insert(begin(res), dtox(1));
    }
    return res;
}

string subBign(const string& a, const string& b)
{
    string res;
    auto aitr = a.rbegin(), bitr = b.rbegin();
    bool brw = false;
    while (aitr != a.rend() || bitr != b.rend()) {
        int bit = 0;
        if (aitr != a.rend()) bit += xtod(*aitr);
        if (bitr != b.rend()) bit -= xtod(*bitr);
        if (brw)              bit -= 1;
        brw = false;
        if (bit < 0) {
            bit += 16;
            brw = true;
        }
        res.insert(begin(res), dtox(bit));
        if (aitr != a.rend()) ++aitr;
        if (bitr != b.rend()) ++bitr;
    }
    if (res.front() == dtox(0) && res.size() != 1)
        res.erase(begin(res));
    return res;
}
