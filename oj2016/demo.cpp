#include <iostream>
#include <vector>

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    vector<int> vec;
    int n, m;
    while (cin >> n) {
        if (!n) break;
        while (--n >= 0) {
            cin >> m;
            vec.push_back(m);
        }
        vector<int>::iterator min = vec.begin();
        for (auto i = vec.begin(); i != vec.end(); ++i)
            if (*i < *min)
                min = i;
        int tmp = *(vec.begin());
        *(vec.begin()) = *min;
        *min = tmp;
        cout << vec[0];
        for (int i = 1; i < vec.size(); ++i) {
            cout << ' ' << vec[i];
        } cout << endl;
        vec.clear();
    }
    return 0;
}
