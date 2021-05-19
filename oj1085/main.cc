#include <iostream>
#include <cstring>
using namespace std;
#define INF 0x3f3f3f3f
using ll = long long;
#define mms(a,x) memset(a, x, sizeof(a))
#define N 50050
#define rep(i,a,b) for (int i = a; i <= b; ++i)

int c1[N], c2[N];

struct Coin {
  int val;
  int cnt;
};

int main()
{
  Coin coins[3];
  coins[0].val = 1;
  coins[1].val = 2;
  coins[2].val = 5;
  while (cin >> coins[0].cnt >> coins[1].cnt >> coins[2].cnt) {
    if (coins[0].cnt == 0 && coins[1].cnt == 0 && coins[2].cnt == 0)
      break;
    int maxval = coins[0].val * coins[0].cnt + coins[1].val * coins[1].cnt + coins[2].val * coins[2].cnt;
    mms(c1, 0);
    mms(c2, 0);
    rep(i, 0, coins[0].cnt) {
      c1[i] = 1;
    }
    rep(i, 1, 2) {
      rep(j, 0, maxval) {
        for (int k = 0; k + j <= maxval && k <= coins[i].cnt * coins[i].val; k += coins[i].val) {     // 为每一种硬币累增
          c2[j + k] += c1[j];
        }
      }
      rep(j, 0, maxval) {
        c1[j] = c2[j];
        c2[j] = 0;
      }
    }

    int i;
    for (i = 1; i <= maxval; ++i) {
      if (!c1[i])
        break;
    }

    cout << i << endl;
  }

  return 0;
}
