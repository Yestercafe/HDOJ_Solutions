#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["a"] = 1;
    ++mp["b"];

    cout << mp["a"] << mp["b"] << mp["c"] << endl;

    return 0;
}
