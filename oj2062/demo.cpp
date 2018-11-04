#include <iostream>

int arrangement(int n, int m) {
    if (m == 0) return 1;
    else return (n - m + 1) * arrangement(n, m - 1);
}

int main(void) {
    using namespace std;
    ios::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m) {
        int module;
        for (module = 1; arrangement(n, module) < m;
             ++module, m -= arrangement(n, module)) {
                 continue;
        }

        
    }
    return 0;
}
