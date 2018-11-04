#include <iostream>
#include <vector>

int main(void) {
    using namespace std;
    ios::sync_with_stdio(false);
    vector<int> vec;
    int m;
    cin >> m;
    int n;
    for (int _ = 1; _ <= m; ++_) {
        cin >> n;
        while (--n >= 0) {
            int e;
            cin >> e;
            vec.push_back(e);
        }
        int downer = 0, upper = 0, max = 0, sum;
        for (int i = 0; i < vec.size(); ++i) {
            sum = 0;
            for (int j = i; j < vec.size(); ++j) {
                sum += vec[j];
                if (sum > max) {
                    max = sum;
                    downer = i;
                    upper = j;
                }
            }
        }
        cout << "Case " << _ << ":" << endl
             << max << " " << downer + 1 << " " << upper + 1 << endl;
        if (_ != m) cout << endl;
        vec.clear();
    }


    return 0;
}
