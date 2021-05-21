#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXN 1000050
#define mms(a, x) memset(a, x, sizeof(a))
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define INF 0x3f3f3f3f

struct Node {
  int val;
  int cnt;
  friend bool operator < (const Node& lhs, const Node& rhs) {
    return lhs.val < rhs.val;
  }
  friend ostream& operator << (ostream& os, const Node& n) {
    return (os << n.val << ' ' << n.cnt);
  }
};

Node ns[MAXN];
int n;
int c1[MAXN], c2[MAXN];

int main()
{
  while (cin >> n) {
    int maxs = 0;
    if (n < 0) break;
    rep (i, 1, n) {
      cin >> ns[i].val >> ns[i].cnt;
      maxs += ns[i].val * ns[i].cnt;
    }
    sort(ns, ns + n);
    mms(c1, 0);
    mms(c2, 0);

    for (int i = 0; i <= ns[1].val * ns[1].cnt; i += ns[1].val) {
      c1[i] = 1;
    }

    rep (i, 1, n) {
      rep (j, 0, maxs) {
        for (int k = 0; k + j <= maxs && k <= ns[i].val * ns[i].cnt; k += ns[i].val) {
          c2[j + k] += c1[j];
        }
      }
      rep(j, 0, maxs) {
        c1[j] = c2[j];
        c2[j] = 0;
      }
    }

    int i = maxs / 2;
    while (i >= 0) {
      if (c1[i]) break;
      --i;
    }
    cout << maxs - i << " " << i << endl;
  }

  return 0;
}
