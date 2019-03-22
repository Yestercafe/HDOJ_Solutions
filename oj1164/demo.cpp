#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);


    int n;
    while (cin >> n) {
        vector<int> answer;
        for (int check = 2; check <= n; ++check) {
            bool isPrime = true;
            for (int i = 2; i <= check / i; ++i) {
                if (check % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            // cerr << "check = " << check << endl;
            if (isPrime) {
                while (n % check == 0 && n != 1) {
                    // cerr << "in isPrimer if : check = " << check << endl;
                    answer.push_back(check);
                    n /= check;
                }
            }
        }

        for (int i = 0; i != answer.size(); ++i) {
            cout << answer[i];
            if (i == answer.size() - 1)
                cout << endl;
            else
                cout << '*';
        }
    }

    return 0;
}
