#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        vector<int> vec1, vec2;

        for (int i = 0; i < n; ++i) {
            int score;
            cin >> score;
            vec1.push_back(move(score));
        }
        for (int i = 0; i < n; ++i) {
            int score;
            cin >> score;
            vec2.push_back(move(score));
        }

        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        int sum1, sum2;
        sum1 = sum2 = 0;
        for (int i = 0; i < vec1.size(); ++i) {
            if (vec1[i] > vec2[i])
                sum1 += 2;
            else if (vec1[i] < vec2[i])
                sum2 += 2;
            else {
                ++sum1;
                ++sum2;
            }
        }

        printf("%d vs %d\n", sum1, sum2);
    }

    return 0;
}
