// WARNING： 又一次看错题目警告！！！！统计每行的单词数！！！
#include <iostream>
#include <string>
#include <set>
#include <sstream> //抄来的，去吃完饭，稍后用C语言重写

int main(void)
{
    using namespace std;
    ios::sync_with_stdio(false);
    set<string> wrdLst;
    string line, str;
    while (getline(cin, line)) {
        stringstream ss;
        if (line == "#")
            break;
        ss << line;
        while (ss >> str) {
            wrdLst.insert(str);
        }
        cout << wrdLst.size() << endl;
        wrdLst.clear();
    }
    return 0;
}

