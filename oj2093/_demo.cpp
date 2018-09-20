// C++方案作废
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>

struct Score {
    std::string name;
    int acn;
    int time;
};

int main(void)
{
    using namespace std;
    vector<Score> vec;
    string str, line;
    int score, err = -1;
    int n, add;
    cin >> n >> add;
    while (getline(cin, line)) {
        stringstream ss;
        ss << line;
        ss >> str;
        Score stu;
        stu.name = move(str);
        stu.acn = 0;
        stu.time = 0;

        for (int i = 0; i < n; ++i) {
            err = -1;
            ss >> str;
            bool hasBracket = false;
            for (auto c: str) {
                if (c == '(') {
                    hasBracket = true;
                    break;
                }
            }
            if (hasBracket)
                sscanf(str.c_str(), "%d(%d)", &score, &err);
            else
                sscanf(str.c_str(), "%d", &score);
            if (score > 0) {
                ++stu.acn;
                stu.time += score;
            }
            if (err != -1)
                stu.time += add * err;
        }
        vec.push_back(move(stu));
    }

    for (int i = 1; i < vec.size(); ++i) {
        for (int j = i; j < vec.size(); ++i) {
            if (vec[j-1].acn < vec[j].acn)
                swap(vec[j-1], vec[j]);
            else if (vec[j-1].acn == vec[j].acn)
                if (vec[j-1].name < vec[j].name)
                    swap(vec[j-1], vec[j]);
        }
    }
    for (auto s: vec) {
        cout << s.name << " " << s.acn << " " << s.time << endl;
    }

    return 0;
}
