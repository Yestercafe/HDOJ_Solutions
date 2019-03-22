#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

size_t n;
deque<int> stck;
vector<bool> used;
bool hasAns = false;

array<bool, 40> primeLst;

void printStack();
void getNext(size_t index);

int main()
{
    ios::sync_with_stdio(false);

    primeLst[0] = primeLst[1] = false;
    for (int i = 2; i < primeLst.size(); ++i) {
        bool isPrime = true;
        for (int k = 2; k <= i / k; ++k) {
            if (i % k == 0) {
                isPrime = false;
                break;
            }
        }
        primeLst[i] = isPrime;
    }

    // copy(begin(primeLst), end(primeLst), ostream_iterator<bool>(cout, ", "));
    // cout << endl;

    size_t loopStep = 0;
    while (cin >> n) {
        if (n == 0) break;
        ++loopStep;
        cout << "Case " << loopStep << ":" << endl;
        stck.clear();
        stck.push_back(1);

        used.assign(n + 1, false);
        used[1] = true;

        hasAns = false;

        getNext(1);
        // if (!hasAns)
            // cout << "No Answer" << endl;

        cout << endl;
    }

    return 0;
}

void printStack() {
    hasAns = true;
    for (int i = 0; i < stck.size(); ++i) {
        cout << stck[i];
        if (i == stck.size() - 1)
            cout << endl;
        else
            cout << ' ';
    }
}

void getNext(size_t index) {
    if (index == n) {
        if (primeLst[stck.front() + stck.back()])
            printStack();
        else
            return ;
    } else {
        for (int k = 1; k < used.size(); ++k) {
            if (used[k] == true)
                continue;
            if (!primeLst[stck[index - 1] + k])
                continue;
            else {
                used[k] = true;
                stck.push_back(k);
                getNext(index + 1);
                stck.pop_back();
                used[k] = false;
            }
        }
    }
}
