#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define Rep(i, a, b) for (int i = a; i >= b; --i)
#define INF 0x3f3f3f3f
using ll = long long;
#define mms(a, x) memset(a, x, sizeof(a))
int letters[27];
ll c1[60], c2[60];


int main()
{
  int t;
  while (cin >> t) {
    while (t--) {
      rep (i, 1, 26) {
        cin >> letters[i];
      }

      mms(c1, 0);
      mms(c2, 0);
      c1[0] = 1;
      rep (i, 1, 26) {
        rep (j, 0, 51) {
          for (int k = 0; k + j <= 51 && k <= i * letters[i]; k += i) {
            c2[j + k] += c1[j];
          }
        }
        rep (j, 0, 51) {
          c1[j] = c2[j];
          c2[j] = 0;
        }
      }
#ifdef DEBUG__
      cout << "c1: ";
      copy(c1 + 1, c1 + 52, ostream_iterator<int>(cout, ", "));
      endl(cout);
#endif  /* DEBUG__ */
      ll ans = accumulate(c1 + 1, c1 + 51, 0, plus<ll>{});
      cout << ans << endl;
    }
  }
  return 0;
}