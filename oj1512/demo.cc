#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>
#include <ext/pb_ds/priority_queue.hpp>
#include <cassert>
#include <vector>
#include <utility>
using namespace std;
using pii = pair<int, int>;
// #define __DEBUG_LOG    1
#ifdef __DEBUG_LOG
// here
#endif

struct heap_cmp {
    heap_cmp() = default;
    bool operator() (const pii &lhs, const pii &rhs) {
        return lhs.second < rhs.second;
    }
};

static int uf_find(vector<int> &uf, int index) {
    while (uf[index] != index) {
        index = uf[index];
    }
    return index;
}

static void printPii(const pii& p) {
    cout << "<" << p.first << ", " << p.second << "> ";
}

template <typename T>
static void printVecpii(const T& v) {
    for (const auto &p: v) {
        printPii(p);
    }
}


int main()
{
    ios::sync_with_stdio(false);
// #ifdef __DEBUG_LOG
    cin.tie(nullptr);
// #endif

    int n;
    while (cin >> n) {
        vector<__gnu_pbds::priority_queue<pii, heap_cmp>> heapVec;
        vector<int> uf;

        for (int i = 0; i < n; ++i) {
            int strongness;
            cin >> strongness;
            heapVec.push_back({});
            heapVec.back().push({i, strongness});
            uf.push_back(i);
        }

        cin >> n;

        for (int i = 0; i < n; ++i) {
            int a, b;
            cin >> a >> b;
            --a;
            --b;

            auto roota = uf_find(uf, a);
            auto rootb = uf_find(uf, b);

            if (roota == rootb) {
                cout << "-1\n";
                continue;
            } else if (roota > rootb) {
                swap(a, b);
                swap(roota, rootb);
            }

            auto heapa_itr = next(begin(heapVec), roota);
            auto heapb_itr = next(begin(heapVec), rootb);

#ifdef __DEBUG_LOG
            cout << "*heapa_itr ->\n";
            printVecpii(*heapa_itr);
            cout << '\n';
            cout << "*heapb_itr ->\n";
            printVecpii(*heapb_itr);
            cout << '\n';
#endif

            auto heapa_top_first = heapa_itr->top().first;
            auto heapb_top_first = heapb_itr->top().first;

#ifdef __DEBUG_LOG
            auto heapa_rear_itr = next(begin(*heapa_itr), heapa_itr->size() - 1);
            auto heapb_rear_itr = next(begin(*heapb_itr), heapb_itr->size() - 1);

            assert(heapa_itr->top().first == heapa_rear_itr->first);
            assert(heapb_itr->top().first == heapb_rear_itr->first);
#endif

            // for (auto itr = heapa_itr->begin(); itr != heapa_itr->end(); ++itr) {
            //     if (itr->first == heapa_top_first) {
            //         heapa_itr->modify(itr, {itr->first, itr->second / 2});
            //         break;
            //     }
            // }
            //
            // for (auto itr = heapb_itr->begin(); itr != heapb_itr->end(); ++itr) {
            //     if (itr->first == heapb_top_first) {
            //         heapb_itr->modify(itr, {itr->first, itr->second / 2});
            //         break;
            //     }
            // }

            auto heapa_rear_v (heapa_itr->top());
            auto heapb_rear_v (heapb_itr->top());
            heapa_itr->pop();
            heapb_itr->pop();
            heapa_itr->push({heapa_rear_v.first, heapa_rear_v.second / 2});
            heapb_itr->push({heapb_rear_v.first, heapb_rear_v.second / 2});

            for (const auto &p: (*heapb_itr)) {
                const auto first = p.first;
                uf.at(first) = roota;
            }

            heapa_itr->join(*heapb_itr);
            assert(heapb_itr->empty());
            cout << heapa_itr->top().second << '\n';
        }

    }

    return 0;
}
