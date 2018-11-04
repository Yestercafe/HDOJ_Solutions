#include <iostream>
#include <string>
#include <sstream>
using std::string;

string ppp(string, string);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n;
    string a, b;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a >> b;
        auto e = ppp(a, b);
        cout << "Case " << i << ":" << endl
             << a << " + " << b << " = " << e << endl;
        if (i != n) cout << endl;
    }

    return 0;
}

string ppp(string lhs, string rhs)
{
    using std::stringstream;
    string res;
    auto lri = lhs.rbegin(),
         rri = rhs.rbegin();
    bool isUpd = false;

    while(lri != lhs.rend() || rri != rhs.rend()) {
        int a = 0, b = 0;
        if (lri != lhs.rend()) {
            stringstream ss;
            ss << *lri;
            ss >> a;
        }
        if (rri != rhs.rend()) {
            stringstream ss;
            ss << *rri;
            ss >> b;
        }
        int bit = a + b + (isUpd ? 1 : 0);
        isUpd = false;
        if (bit >= 10) {
            bit -= 10;
            isUpd = true;
        }
        stringstream ss;
        ss << bit;
        char bitc;
        ss >> bitc;
        res.insert(0, 1, bitc);

        if (lri != lhs.rend()) ++lri;
        if (rri != rhs.rend()) ++rri;

    }
    return res;
}
