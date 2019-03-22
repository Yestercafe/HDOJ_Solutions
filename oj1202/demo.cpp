#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

static int getLevel(int score) {
    if (90 <= score && score <= 100) {
        return 4;
    } else if (80 <= score && score < 90) {
        return 3;
    } else if (70 <= score && score < 80) {
        return 2;
    } else if (60 <= score && score < 70) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    struct Subject {
        double score;
        double weight;
    };

    int n;
    while(cin >> n) {

    vector<Subject> vec;
    while (n--) {
        double score, weight;
        cin >> weight >> score;
        vec.push_back({score, weight});
    }

    double sumLevel = 0, sumWeight = 0;
    for (const auto & c: vec) {
        if (c.score < 0)
            continue;
        sumLevel += getLevel(c.score) * c.weight;
        sumWeight += c.weight;
    }

    if (sumWeight == 0) {
        cout << -1 << endl;
    } else {
        cout << fixed << setprecision(2)
             << floor(sumLevel / sumWeight * 100 + .5) / 100 << endl;
    }
}

    return 0;
}
