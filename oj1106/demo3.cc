#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string line;
    while (getline(cin, line)) {
        int st = 0, ed = line.size();
        vector<int> lst;
        while (st != -1 and st <= ed) {
            auto spliter = line.find_first_of("5", st);
            auto substr = line.substr(st, spliter - st);
            if (!substr.empty())
                lst.push_back(stoi(substr));
            st = line.find_first_not_of("5", spliter);
        }
        sort(lst.begin(), lst.end(), less<int>());
        for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
            if (itr != lst.begin()) cout << ' ';
            cout << *itr;
        }
        cout << endl;
    }

    return 0;
}
