#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        bool firstIn = true;
        while (t--) {
            if (firstIn)
                firstIn = false;
            else
                cout << '\n';

            int n;
            cin >> n;
            string name;
            double credit, score;
            double minScore = 10000;
            double sum = 0, csum = 0;
            for (int i = 0; i < n; ++i) {
                cin >> name >> credit >> score;
                if (minScore > score) {
                    minScore = score;
                }
                sum  += credit * score;
                csum += credit;
            }

            if (minScore < 60) {
                cout << "Sorry!\n";
            } else {
                cout << fixed << setprecision(2) << sum / csum << '\n';
            }
        }
    }

    return 0;
}
