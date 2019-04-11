#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

const char digit[] = {
    '0', '1', '2', '3',
    '4', '5', '6', '7',
    '8', '9', 'A', 'B',
    'C', 'D', 'E', 'F'
};

static int getDecBit(const char dig) {
    switch (dig) {
      case '0'...'9':
        return dig - '0';
      case 'A'...'F':
        return dig - 'A' + 10;
      default:
        return 16;
    }
}

static bool isVaild(const string &num, const int base)
{
    for (const auto &c: num) {
        if (c > digit[base - 1]) {
            return false;
        }
    }
    return true;
}

static int toDec(const string &num, const int base)
{
    int ret = 0;
    int cp = 1;
    for (auto itr = num.rbegin(); itr != num.rend(); ++itr) {
        ret += getDecBit(*itr) * cp;
        cp *= base;
    }
    return ret;
}

static string fromDec(const int &num, const int base)
{
    string ret;
    int n = num;
    while (n != 0) {
        auto bit = digit[n % base];
        ret.insert(ret.begin(), bit);
        n /= base;
    }
    return ret;
}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr);

    string ori;
    int from, to;
    while (cin >> ori >> from >> to) {
        if (!isVaild(ori, from)) {
            printf("%7s\n", "ERROR");
        } else {
            auto res = fromDec(toDec(ori, from), to);
            if (res.size() > 7) {
                printf("%7s\n", "ERROR");
            } else {
                printf("%7s\n", res.c_str());
            }
        }
    }

    return 0;
}
