#include <iostream>
using namespace std;

void print_top(const int w) {
    cout << '+';
    for (int i = 0; i < w; ++i) {
        cout << '-';
    }
    cout << '+' << endl;
}

void print_body(const int w) {
    cout << '|';
    for (int i = 0; i < w; ++i) {
        cout << ' ';
    }
    cout << '|' << endl;
}

int main()
{
    ios::sync_with_stdio(false);

    int w, h;
    while (cin >> w >> h) {
        print_top(w);
        for (int i = 0; i < h; ++i) {
            print_body(w);
        }
        print_top(w);
        cout << endl;
    }

    return 0;
}
