#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>

const int mul[6] = {1, 2, 4, 8, 16, 32};

int toDec(const char ch) {
    switch (ch) {
      case '0' ... '9':
          return ch - '0';
      case 'a' ... 'f':
          return ch - 'a' + 10;
      case 'A' ... 'F':
          return ch - 'A' + 10;
    }
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);

    string input;
    while (cin >> input) {
        vector<int> vec;
        for (const auto &ch: input) {
            stringstream ss;
            ss << hex << (int)ch;
            for (int i = 1; i >= 0; --i) {
                for (int j = 0; j < 4; ++j) {
                    vec.push_back((toDec(ss.str()[i]) >> j) % 2);
                }
            }
        }

        int sum = 0;
        bool firstIn = true;
        for (int i = 0; i < vec.size(); ++i) {
//            cout << vec[i] * mul[5 - i % 6] << endl;
            sum += vec[i] * mul[5 - i % 6];
            if (i % 6 == 5) {
                if (firstIn)
                    firstIn = false;
                else
                    cout << ' ';
                cout << sum;
                sum = 0;
            }
        }
        cout << ' ';
    }

    return 0;
}
