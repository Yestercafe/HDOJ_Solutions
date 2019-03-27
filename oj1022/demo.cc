#include <iostream>
#include <stack>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    string ins, outs;
    while (cin >> n >> ins >> outs) {
        stack<char> stk;
        auto outi = outs.begin();
        auto ini = ins.begin();
        vector<bool> srt; // true is in, false is out
        for (int i = 0; i < n * 2; ++i) {
            if (stk.empty()) {
                stk.push(*ini);
                srt.push_back(true);
                ++ini;
            } else {
                if (stk.top() == *outi) {
                    stk.pop();
                    srt.push_back(false);
                    ++outi;
                } else {
                    stk.push(*ini);
                    srt.push_back(true);
                    ++ini;
                }
            }
        }
        if (!stk.empty()) {
            cout << "No." << endl;
        } else {
            cout << "Yes." << endl;
            for (const auto& c: srt) {
                cout << (c ? "in" : "out") << endl;
            }
        }
        cout << "FINISH" << endl;
    }

    return 0;
}
