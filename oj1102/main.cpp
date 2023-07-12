#include <bits/stdc++.h>
using i64 = long long;

struct Dsu {
    std::size_t n;
    std::vector<size_t> pa, size;

    explicit Dsu(size_t n)
      : n{n}, pa(n), size(n, 1) {
        std::iota(pa.begin(), pa.end(), 0);
    }

    void unite(size_t x, size_t y) {
        x = find(x), y = find(y);
        if (x == y) return;
        if (size[x] < size[y]) std::swap(x, y);
        pa[y] = x;
        size[x] += size[y];
    }

    size_t find(size_t x) { return pa[x] == x ? x : pa[x] = find(pa[x]); }
};

struct Edge {
    int u, v, w;
};

int main() {
    int n;
    while (std::cin >> n) {
        Dsu dsu(n + 1);
        std::vector<Edge> edges;
        edges.reserve(n * (n - 1) / 2);
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                int w;
                std::cin >> w;
                if (i < j) {
                    edges.push_back({i, j, w});
                }
            }
        }

        int q;
        std::cin >> q;
        while (q--) {
            int u, v;
            std::cin >> u >> v;
            dsu.unite(u, v);
        }

        // Kruskal
        std::sort(edges.begin(), edges.end(), [](const Edge& a, const Edge& b) { return a.w < b.w; });
        int ans = 0;
        for (auto& e : edges) {
            int u = e.u, v = e.v, w = e.w;
            int fu = dsu.find(u), fv = dsu.find(v);
            if (fu == fv) continue;
            ans += w;
            dsu.unite(fu, fv);
        }

        std::cout << ans << std::endl;
    }
    
    return 0;
}
