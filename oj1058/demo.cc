#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <algorithm>
#include <cstdint>
#define TIMES 5842

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int times = 2;
    set<int64_t> humble {1};
    const int stdFact[] = {2, 3, 5, 7};
    for (auto itr = humble.begin(); times <= TIMES; ++itr) {
        for (const auto& c: stdFact) {
            int64_t nextOne = *itr * c;
            auto delta = distance(humble.begin(), itr);
            auto ins = humble.insert(nextOne);
            itr = next(humble.begin(), delta);
            if (ins.second)
                ++times;
            if (times > TIMES)
                goto end;
        }
    }
    end:
    // copy(begin(humble), end(humble), ostream_iterator<int>(cout, ", "));
    // cout << endl;
    cout << "here" << endl;

    int n;
    while (cin >> n) {
        if (n == 0) break;
        cout << *next(humble.begin(), n - 1) << endl;
    }

    return 0;
}
