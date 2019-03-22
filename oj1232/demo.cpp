#include <iostream>
#include <set>

class Duf {
private:
    int* id;
    int* power;
    int n;

public:
    Duf(int N) : n(N) {
        id = new int[n];
        power = new int[n];
        for (int i = 0; i < n; ++i) {
            id[i] = power[i] = i;
        }
    }
    Duf() = delete;
    ~Duf() {
        delete[] id;
        delete[] power;
    }

    int find(int p);

public:
    int count() const { return this->n; }
    int* getId() const { return this->id; }
    void connect(int p, int q);
    bool connected(int p, int q);
};

int Duf::find(int p) {
    while (p != id[p]) {
        p = id[p];
    }
    return p;
}

bool Duf::connected(int p, int q) {
    return find(p) == find(q);
}

void Duf::connect(int p, int q) {
    int m = find(p);
    int n = find(q);

    if (m == n) {
        return ;
    }

    if (power[m] < power[n]) {
        id[m] = n;
        power[n] += power[m];
    } else {
        id[n] = m;
        power[m] += power[n];
    }
}

int main(void) {
    using namespace std;
    ios::sync_with_stdio(false);

    int n, m;
    while (cin >> n) {
        if (n == 0) break;
        cin >> m;

        Duf duf(n);
        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            duf.connect(a - 1, b - 1);
        }

        set<int> st;

        for (int i = 0; i < n; ++i) {
//            cout << duf.find(i) << " ";
            st.insert(duf.find(i));
        }

        cout << st.size() - 1 << endl;
    }

    return 0;
}
