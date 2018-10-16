#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

using std::map;
using std::cout;
using std::endl;
using std::string;
using std::pair;
using std::make_pair;

map<int, char> list;

class find_ {
private:
    char n;
public:
    find_() = default;
    find_(char _n) : n(_n) {}
    bool operator()(pair<int, char> p) {
        return this->n == p.second;
    }
};

static void init() {
    list.insert(make_pair<int, char>(0, '0'));
    list.insert(make_pair<int, char>(1, '1'));
    list.insert(make_pair<int, char>(2, '2'));
    list.insert(make_pair<int, char>(3, '3'));
    list.insert(make_pair<int, char>(4, '4'));
    list.insert(make_pair<int, char>(5, '5'));
    list.insert(make_pair<int, char>(6, '6'));
    list.insert(make_pair<int, char>(7, '7'));
    list.insert(make_pair<int, char>(8, '8'));
    list.insert(make_pair<int, char>(9, '9'));
    list.insert(make_pair<int, char>(10, 'A'));
    list.insert(make_pair<int, char>(11, 'B'));
    list.insert(make_pair<int, char>(12, 'C'));
    list.insert(make_pair<int, char>(13, 'D'));
    list.insert(make_pair<int, char>(14, 'E'));
    list.insert(make_pair<int, char>(15, 'F'));
}

static int pow(int n, int p) {
    if (p == 0) 
        return 1;
    else
        return n * pow(n, p - 1);
}

string dtov(int d, int v);
int vtod(string s, int v);
int vplus(string s, int v);

int main()
{
    init();
    std::ios::sync_with_stdio(false);
    
    for (int i = 1000; i < 10000; ++i) {
        auto e1 = vplus(dtov(i, 10), 10);
        auto e2 = vplus(dtov(i, 16), 16);
        auto e3 = vplus(dtov(i, 12), 12);
        if (e1 == e2 && e2 == e3) {
            cout << "case " << i << ':';
        }
    } cout << endl;
    
    return 0;
}

string dtov(int d, int v)
{
    string res;
    while (d >= v)
    {
        res.insert(0, 1, list.find(d % v)->second);
        d /= v;
    }
    if (d != 0) {
        res.insert(0, 1, list.find(d)->second);
    }
    return res;
}

int vtod(string s, int v)
{
    int res = 0;
    for (int i = 0; i < s.size(); ++i) {
        auto tmp = find_if(list.begin(), list.end(), find_(s[s.size() - i - 1]))->first;
        //cout << "l:" << tmp << endl;   
	    res += tmp * pow(v, i);
    }
    return res;
}

int vplus(string s, int v) {
    int res = 0;
    for (int i = 0; i < s.size(); ++i) {
        auto tmp = find_if(list.begin(), list.end(), find_(s[s.size() - i - 1]))->first;
        //cout << "l:" << tmp << endl;   
	    res += tmp;
    }
    return res;
}

