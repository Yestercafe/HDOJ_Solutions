// 不能说简单，只能说这题的思路非常清晰：
// 1. 使用桶来存各个整数出现的次数；
// 2. 线性搜索桶效率低，所以使用红黑树搜索，红黑树由STL友情提供；
// 3. 因为按照题目的描述，这些数里面有且仅有一个符合条件的，所以不用考虑太多（肯定能搜到的，
//    而且只能搜到一个）
#include <iostream>
#include <map>
#include <utility>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int odd;
    while (cin >> odd) {
        map<int, int> bucket;
        for (int _ = 0; _ < odd; ++_) {
            int newOne;
            cin >> newOne;
            auto fnd = bucket.find(newOne);
            if (fnd == end(bucket)) {
                bucket.insert(make_pair(newOne, 1));
            } else {
                fnd->second++;
            }
        }

        for (const auto& p: bucket) {
            if (p.second >= (odd + 1) / 2) {
                cout << p.first << endl;
                break;
            }
        }
    }

    return 0;
}
