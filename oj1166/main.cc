#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int n;   // 数组长度
// a 是原始数组，c 是树状数组
int a[50010], c[50010];

int lowbit(int x)
{
  return x & (-x);
}

// 在 i 位置 +k
void update(int i, int k)
{
  while (i <= n) {
    c[i] += k;
    i += lowbit(i);
  }
}

int getSum(int i)
{
  int res = 0;
  while (i > 0) {
    res += c[i];
    i -= lowbit(i);
  }
  return res;
}

int main()
{
  int t;
  cin >> t;
  for (int cs = 1; cs <= t; ++cs){
    cout << "Case " << cs << ":" << endl;
    memset(c, 0, sizeof(c));
    cin >> n;   // 人数
    for (int i = 1; i <= n; ++i) {
      cin >> a[i];        // 本题中原始数组可以不存
      update(i, a[i]);    // 边输入边更新
    }

    string instr;
    while (cin >> instr) {

      if (instr == "End") break;
      else if (instr == "Add") {
        int i, k;
        cin >> i >> k;
        update(i, k);
      } else if (instr == "Sub") {
        int i, nk;
        cin >> i >> nk;
        update(i, -nk);
      } else if (instr == "Query") {
        int i, j;
        cin >> i >> j;
        cout << getSum(j) - getSum(i - 1) << endl;
      }
    }
  }
  return 0;
}
