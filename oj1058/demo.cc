#include <iostream>
#include <set>
#include <vector>
#include <cstdio>

#define MAX 2000000000

using namespace std;

static void generate(set<int>& humble, int src, int product) {
    static const int primes[] = {2, 3, 5, 7};
    humble.insert(src);
    for (int i = 3; i >= 0; --i) {
        if (primes[i] < product) break;
        if (src <= MAX  / primes[i])
            generate(humble, src * primes[i], primes[i]);
    }
}

int main()
{
    set<int> humble;
    generate(humble, 1, 2);

    vector<int> humble_list(humble.begin(), humble.end());
    int n;
    while (cin >> n) {
    // for (int n = 1; n <= 100; ++n) {
        if (n == 0) break;

        cout << "The " << n;    
        if (n % 10 == 1 && n % 100 != 11) {
            cout << "st";
        } else if (n % 10 == 2 && n % 100 != 12) {
            cout << "nd";
        } else if (n % 10 == 3 && n % 100 != 13) {
            cout << "rd";
        } else {
            cout << "th";
        }
        cout << " humble number is " << humble_list[n - 1] << ".\n" << flush;
    }

    return 0;
}
