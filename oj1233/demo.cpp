#include <iostream>
#include <vector>
using namespace std;

struct Path {
    int p;
    int q;
    int w;
    Path() = delete;
    Path(int P, int Q, int W) : p(P), q(Q), w(W) {}
    bool operator<(const Path& rhs) {
        if (this->w != rhs.w)
            return this->w < rhs.w;
        else {
            if (this->p != rhs.p)
                return this->p < rhs.p;
            else
                return this->q < rhs.q;
        }
    }
    bool operator>(const Path& rhs) {
        if (this->w != rhs.w)
            return this->w > rhs.w;
        else {
            if (this->p != rhs.p)
                return this->p < rhs.p;
            else
                return this->q < rhs.q;
        }
    }
};

vector<int> ufs;

int uf_find(const int);
void uf_link(const int, const int);
bool uf_isLinked(const int, const int);
int kruskal(vector<Path> &, int);

int main(void)
{
    ios::sync_with_stdio(false);

    int n;
    while (cin >> n) {
        if (n == 0) break;
        int p, q, w;
        vector<Path> graph;

        for (int i = 0; i < n * (n - 1) / 2; ++i) {
            cin >> p >> q >> w;
            Path newPath {p, q, w};

            auto itr = graph.begin();
            for ( ; itr != graph.end(); ++itr) {
                if (*itr > newPath) {
                    graph.insert(itr, newPath);
                    break;
                }
            }
            if (itr == graph.end()) {
                graph.push_back(newPath);
            }
        }

        cout << kruskal(graph, n) << endl;
    }

    return 0;
}

int uf_find(const int p)
{
    int fnd = p;
    while (ufs[fnd] >= 0)
        fnd = ufs[fnd];



    int i = p;
    while (fnd != i) {
        int tmp = ufs[i];
        ufs[i] = fnd;
        i = tmp;
    }

    return fnd;
}

void uf_link(const int p, const int q)
{
    int rootp = uf_find(p), rootq = uf_find(q);
    if (rootp == rootq && rootq >= 0)
        return ;
    /*
    ufs[rootp] and ufs[rootq] are exactly nagitive numbers,
    so |ufs[rootp]| and |ufs[rootq]| represent the node amount of
    both roots, and for decreasing the link tree's depth, we will
    link the smaller tree (as the bigger one's subtree) to
    the bigger tree to generate a new one.
    */
    if (ufs[rootp] > ufs[rootq])  // if (abs(ufs[rootp]) < abs(ufs[rootq]))
    {
        ufs[rootp] = rootq;
        rootq += rootp;  // Add node amount
    } else {
        ufs[rootq] = rootp;
        rootp += rootq;
    }
}

bool uf_isLinked(const int p, const int q)
{
    return uf_find(p) == uf_find(q);
}

int kruskal(vector<Path> & graph, int n)
{
    // Initialize the union find set
    ufs.clear();
    while (--n >= 0)
        ufs.push_back(-1);

    int sumweight = 0;
    for (auto & path: graph) {
        int p = path.p - 1, q = path.q - 1;
        if (uf_find(p) != uf_find(q)) {
            sumweight += path.w;
            uf_link(p, q);
        }
    }

    return sumweight;
}
