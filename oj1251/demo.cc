#include <iostream>
#include <string>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/hash_policy.hpp>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    __gnu_pbds::gp_hash_table<string, int> mp;
    while (getline(cin, word)) {
        if (word.empty())
            break;
        for (int i = 0; i < word.size(); ++i)
            ++mp[word.substr(0, word.size() - i)];
    }

    while (getline(cin, word)) {
        cout << mp[word] << '\n';
    }

    return 0;
}
