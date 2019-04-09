#include <iostream>
#include <string>
#include <vector>
using namespace std;

string add(const string& a, const string& b) {
    string str;
    auto ari = a.rbegin(), bri = b.rbegin();
    bool bupd = false;
    while (ari != a.rend() || bri != b.rend()) {
        int bit = 0;
        if (ari != a.rend()) bit += *ari - '0';
        if (bri != b.rend()) bit += *bri - '0';
        bit += bupd ? 1 : 0;
        bupd = false;

        if (bit >= 10) {
            bit -= 10;
            bupd = true;
        }
        str.insert(str.begin(), bit + '0');

        if (ari != a.rend()) ++ari;
        if (bri != b.rend()) ++bri;
    }
    if (bupd)
        str.insert(str.begin(), '1');
    return str;
}

bool isRev(const string& a) {
    bool ret = true;
    for (int i = 0; i < a.size() / 2; ++i) {
        if (a[i] != a[a.size() - i - 1]) {
            ret = false;
            break;
        }
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(false);

    string num;
    while (cin >> num) {
        vector<string> storage;
        int count = 0;
        storage.push_back(num);
        while (true) {
            if (isRev(num)) {
                cout << count << endl;
                for (int i = 0; i < storage.size(); ++i) {
                    cout << storage[i];
                    if (i == storage.size() - 1)
                        cout << endl;
                    else
                         cout << "--->";
                }
                break;
            } else {
                string rev;
                for (auto itr = num.rbegin(); itr != num.rend(); ++itr)
                    rev.push_back(*itr);
                num = add(num, rev);
                storage.push_back(num);
                ++count;
            }
        }
    }

    return 0;
}