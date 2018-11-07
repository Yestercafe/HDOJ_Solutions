#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <sstream>
using namespace std;

map<char, int> list;
static void init()
{
	list.insert(pair<char, int>('0', 0));
	list.insert(pair<char, int>('1', 1));
	list.insert(pair<char, int>('2', 2));
	list.insert(pair<char, int>('3', 3));
	list.insert(pair<char, int>('4', 4));
	list.insert(pair<char, int>('5', 5));
	list.insert(pair<char, int>('6', 6));
	list.insert(pair<char, int>('7', 7));
	list.insert(pair<char, int>('8', 8));
	list.insert(pair<char, int>('9', 9));
}

int main(void)
{
	ios::sync_with_stdio(false);
	init();
	string a;
	while (cin >> a) {
		if (a == "0") break;
		while (true) {
			if (a.length() == 1) {
				cout << a << endl;
				break;
			}
			int res = 0;
			for (int i = 0; i < a.length(); ++i) {
				res += list.find(a[i])->second;
			}
			stringstream ss;
			ss << res;
			ss >> a;
		}
	}
	return 0;
}
