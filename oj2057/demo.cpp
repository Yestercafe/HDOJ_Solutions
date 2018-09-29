#include <cstdio>
#include <string>
#include <map>
#include <algorithm>
#include <utility>
using std::string;
const struct{char ch; int n;} data[16] {
    {'0', 0}, {'1', 1}, {'2', 2}, {'3', 3},
    {'4', 4}, {'5', 5}, {'6', 6}, {'7', 7},
    {'8', 8}, {'9', 9}, {'A', 10}, {'B', 11},
    {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}
};
string plus(string &, string &);
static int find_d(char ch) {
    for (int i = 0; i < 16; ++i) {
        if (data[i].ch == ch)
            return data[i].n;
    }
}

int main(void)
{
    using namespace std;
    string num1, num2;

    return 0;
}

string plus(string & lhs, string & rhs) {
    auto p = [](char lhs, char rhs) {
        int d = find_d(lhs) + find_d(rhs);
        d >= 16 && d -= 16;
        int res = data[d];
        return res;
    };
}
