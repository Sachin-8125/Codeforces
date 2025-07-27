#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isMeow(string s) {
    string pattern = "meow";
    int p = 0; // pointer to pattern

    for (int i = 0; i < s.size(); ++i) {
        s[i] = tolower(s[i]);
    }

    // Remove consecutive duplicates
    string simplified = "";
    simplified += s[0];
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[i - 1]) {
            simplified += s[i];
        }
    }

    return simplified == "meow";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if (isMeow(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
