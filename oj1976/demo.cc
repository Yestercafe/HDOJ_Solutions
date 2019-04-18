#include <iostream>

struct Version {
    int a, b, c;
    Version() = default;
    Version(int a_, int b_, int c_)
        : a(a_), b(b_), c(c_) {}
    bool operator== (const Version &rhs) {
        return this->a == rhs.a && this->b == rhs.b && this->c == rhs.c;
    }
    bool operator< (const Version &rhs) {
        if (this->a != rhs.a) {
            return this->a < rhs.a;
        } else if (this->b != rhs.b) {
            return this->b < rhs.b;
        } else {
            return this->c < rhs.c;
        }
    }
};

namespace std {
istream & operator>> (istream &is, Version &ver) {
    is >> ver.a >> ver.b >> ver.c;
    return is;
}
}

int main()
{
    using namespace std;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    while (cin >> t) {
        while (t--) {
            Version first, second;
            cin >> first >> second;
            if (first < second) {
                cout << "Second\n";
            } else if (first == second) {
                cout << "Same\n";
            } else {
                cout << "First\n";
            }
        }
    }

    return 0;
}
