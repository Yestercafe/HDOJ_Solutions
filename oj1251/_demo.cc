// 这题目莫名其妙，字典树的模板题，用pb_ds的字典数TLE
// 换用map+substring重新尝试``
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
#include <iterator>
#include <algorithm>
#include <functional>
#include <utility>
#include <string>
using namespace std;

int main()
{
    string word;
    using namespace __gnu_pbds;
    trie<string, null_type, trie_string_access_traits<>,
        pat_trie_tag, trie_prefix_search_node_update> tried;
    while (getline(cin, word)) {
        if (word.empty()) {
            break;
        }
        tried.insert(word);
    }

    while (getline(cin, word)) {
        auto fnds = tried.prefix_range(word);
        auto dis  = distance(fnds.first, fnds.second);
        cout << dis << endl;
    }

    return 0;
}
