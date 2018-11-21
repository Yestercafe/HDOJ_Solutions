#include <iostream>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int ah, am, as, bh, bm, bs;
    int n;
    int rh, rm, rs;
    cin >> n;
    while (--n >= 0) {
        cin >> ah >> am >> as
            >> bh >> bm >> bs;
        rh = ah + bh;
        rm = am + bm;
        rs = as + bs;
        while (rs >= 60) {
            rs -= 60;
            ++rm;
        }
        while (rm >= 60) {
            rm -= 60;
            ++rh;
        }
        cout << rh << " " << rm << " " << rs << endl;
    }

    return 0;
}
