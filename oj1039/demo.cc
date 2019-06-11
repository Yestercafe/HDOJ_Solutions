#include <bits/stdc++.h>
using namespace std;

static bool isVowel(const char ch) {
    switch (ch) {
      case 'a': case 'e': case 'i': case 'o': case 'u':
        return true;
      default:
        return false;
    }
}

static bool isConsonant(const char ch) {
    return !isVowel(ch);
}

int main()
{
    string passwd;
    while (cin >> passwd) {
        if (passwd == "end") break;
        /*
            It must contain at least one vowel.
            It cannot contain three consecutive vowels or three consecutive consonants.
            It cannot contain two consecutive occurrences of the same letter, except for 'ee' or 'oo'.
        */
        bool accept = true;
        bool hasVowel = false;

        for (int i = 0; i < passwd.size(); ++i) {
            if (isVowel(passwd[i])) {
                hasVowel = true;
            }
            if (i < passwd.size() - 1 && passwd[i] == passwd[i+1]) {
                if (passwd[i] != 'e' && passwd[i] != 'o') {
                    accept = false;
                    break;
                }
            }
            if (i < passwd.size() - 2) {
                if (isVowel(passwd[i])) {
                    if (isVowel(passwd[i+1]) && isVowel(passwd[i+2])) {
                        accept = false;
                        break;
                    }
                } else {
                    if (isConsonant(passwd[i+1]) && isConsonant(passwd[i+2])) {
                        accept = false;
                        break;
                    }
                }
            }
        }

        if (!hasVowel) {
           accept = false;
        }

        cout << "<" << passwd << "> is ";
        if (accept) {
            cout << "acceptable.\n";
        } else {
            cout << "not acceptable.\n";
        }
    }
    return 0;
}