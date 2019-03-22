// 纪念第一次和吴一迪大佬讨论的题目
#include <iostream>
#include <cstdint>
#include <vector>
#include <iterator>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    const int64_t div[] = {1, 2, 5, 16, 65, 326, 1957, 13700, 109601, 986410, 9864101,
        108505112, 1302061345, 16926797486, 236975164805, 3554627472076,
        56874039553217, 966858672404690, 17403456103284421, 330665665962404000};

    int64_t n, m;
    while (cin >> n >> m) {
        vector<int> vec;
        for (int64_t i = 1; i <= n; ++i) {
            vec.push_back(i);
        }
        for (int64_t k = n - 1; k >= 0; --k) {
            int64_t delta = m % div[k] == 0 ? m / div[k] - 1 : m / div[k];
            int64_t remain = m % div[k] == 0 ? div[k] : m % div[k];
            // cout << m << " / " << div[k] << " = " << delta << " ... " << remain << endl;
            cout << vec[delta];
            m = remain - 1;
            if (k == 0 || m == 0) {
                cout << endl;
                break;
            } else
                cout << " ";
            // cout.flush();
            vec.erase(next(vec.begin(), delta));
        }
    }

    return 0;
}
