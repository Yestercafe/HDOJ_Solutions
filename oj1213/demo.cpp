#include <iostream>
#include <vector>
#include <set>

void uf_link(std::vector<int> &, const int, const int);
int uf_find(std::vector<int> &, const int);

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(--t >= 0) {
        int n, m;
        cin >> n >> m;

        vector<int> uf;
        for (int i = 0; i < n; ++i) {
            uf.push_back(i);
        }

        while (--m >= 0) {
            int p, q;
            cin >> p >> q;
            uf_link(uf, p - 1, q - 1);
        }

        set<int> st;
        for (const auto & c: uf) {
            st.insert(uf_find(uf, c));
        }

        cout << st.size() << endl;
    }

    return 0;
}

void uf_link(std::vector<int> & uf, const int p, const int q)
{
    int pf = uf_find(uf, p),
        qf = uf_find(uf, q);
    if (pf == qf) {
        return ;
    } else if (pf < qf) {
        uf[pf] = qf;
    } else {
        uf[qf] = pf;
    }
}

int uf_find(std::vector<int> & uf, const int p)
{
    int fnd = p;
    while (uf[fnd] != fnd)
        fnd = uf[fnd];
    return fnd;
}
