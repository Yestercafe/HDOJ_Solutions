#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <utility>
#include <cassert>
using namespace std;

struct Comp {
    int number;
    Comp(const int n) : number(n) {}
    bool operator()(const pair<int, int> &rhs) {
        return rhs.first == this->number;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int jackson;
    while (cin >> jackson) {
        int number, score;
        vector<pair<int, int>> vec;
        while (cin >> number >> score) {
            if (number == 0 && score == 0)
                break;
            vec.push_back(make_pair(number, score));
        }
        
        sort(begin(vec), end(vec), [](const pair<int, int> &lhs, const pair<int, int> &rhs) {
                return lhs.second > rhs.second;
            });
        
        auto fnd = find_if(begin(vec), end(vec), Comp(jackson));
        assert(fnd != end(vec));
        auto rank_pos = fnd;
        while (rank_pos->second == fnd->second)
            --rank_pos;
            
        cout << distance(begin(vec), rank_pos) + 2 << '\n' << flush;
    }
    
    return 0;
}