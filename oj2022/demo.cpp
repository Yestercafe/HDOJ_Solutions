// Tip: 麻烦看清特殊情况好不好，我滴个小哥哥
// Tip*2: 外面肯定有个大循环键入多组数据的，Sample Input没写那么多是它的事
#include <iostream>
#include <vector>
static int _abs(int n) { return n > 0 ? n : -n; }

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    int n, m, a;
    vector<long> vec;
    while (cin >> n >> m) {
        for (int i = 0; i < n * m; ++i) {
            cin >> a;
            vec.push_back(a);
        }
        int pos = 0;
        for (int i = 0; i != vec.size(); ++i) {
            if (abs(vec[pos]) < abs(vec[i]))
                pos = i;
        }
        cout << pos / m + 1 << ' ' << pos % m + 1 << ' ' << vec[pos] << endl;
        vec.clear();
    }

    return 0;
}
