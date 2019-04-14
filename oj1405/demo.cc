// 这题的格式就是屎
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

bool prime[2 << 16];

void initPrime()
{
    for (auto &c: prime)
        c = true;

    prime[0] = prime[1] = false;
    for (int i = 0; i < 2 << 15; ++i)
        if (prime[i] == true)
            for (int j = 2 * i; j < 2 << 16; j += i)
                prime[j] = false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    initPrime();

    int n;
    int loopCount = 0;
    while (cin >> n) {
        ++loopCount;
        if (n < 0) break;
        if (loopCount != 1) {
            cout << '\n';
        }
        cout << "Case " << loopCount << ".\n";

        vector<pair<int, int>> vec;
        for (int i = n; i >= 2 && n != 1; --i) {
            if (prime[i] && n % i == 0) {
                int counter = 0;
                while (n % i == 0) {
                    n /= i;
                    ++counter;
                }

                vec.push_back(make_pair(i, counter));
            }
        }

        for (auto itr = vec.rbegin(); itr != vec.rend(); ++itr) {
            cout << itr->first << ' ' << itr->second << ' ';
            // Source of the SHIT
            // if (itr != vec.rend() - 1) {
            //     cout << ' ';
            // }
        }
        cout << '\n';
    }

    return 0;
}
