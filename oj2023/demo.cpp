// WARNING!: 避免同时使用iostream和stdio中的io，下部为例
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>

static void printRound(double n) {
    printf("%.2lf", floor(n * 100. + .5) / 100.);
}

int main(void)
{
    using namespace std;
    //ios::sync_with_stdio(false);
    int n, m, score;
    int count = 0;
    vector<vector<int>> scores;
    vector<double> avgN, avgM;
    while (cin >> n >> m) {
        for (int i = 0; i < n; ++i) {
            vector<int> stu;
            for (int j = 0; j < m; ++j) {
                cin >> score;
                stu.push_back(score);
            }
            scores.push_back(stu);
        }

        for (int i = 0; i < scores.size(); ++i) {
            double avgn = 0.;
            for (int j = 0; j < scores[0].size(); ++j) {
                avgn += scores[i][j];
            }
            avgn /= m;
            avgN.push_back(avgn);
        }
        for (int j = 0; j < scores[0].size(); ++j) {
            double avgm = 0.;
            for (int i = 0; i < scores.size(); ++i) {
                avgm += scores[i][j];
            }
            avgm /= n;
            avgM.push_back(avgm);
        }

        for (int i = 0; i < avgN.size(); ++i) {
            if (i != 0) cout << ' ';
            printRound(avgN[i]);
        } cout << endl;
        for (int i = 0; i < avgM.size(); ++i) {
            if (i != 0) cout << ' ';
            printRound(avgM[i]);
        } cout << endl;

        for (auto & stu: scores) {
            bool right = true;
            for (int i = 0; i < stu.size(); ++i) {
                if (stu[i] < avgM[i]) {
                    right = false;
                    break;
                }
            }
            if (right) ++count;
        }

        cout << count << endl;

        count = 0;
        scores.clear();
        avgN.clear();
        avgM.clear();
        cout << endl; //再一次没看请题目要求
    }

    return 0;
}
