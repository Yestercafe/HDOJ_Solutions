#include <iostream>
#include <cstring>
#define INF 0x3f3f3f3f
#define mms(a, x) memset(a, x, sizeof(a));
#define rep(i, a, b) for (int i = a; i <= b; ++i)

using namespace std;

int f[20][410];

#define MC 17

void f_gen()
{
  rep (i, 1, MC) {
    rep (j, 1, 400) {
      if (i * i == j)
        f[i][j] = 1 + f[i - 1][j];
      else if (i * i < j)
        f[i][j] = f[i - 1][j] + f[i][j - i * i];
      else
        f[i][j] = f[i - 1][j];
    }
  }
}

int main()
{
  f_gen();

  int t;
  while (cin >> t) {
    if (t == 0) break;
    cout << f[MC][t] << endl;
  }

  return 0;
}
