#include <iostream>
using namespace std;

string solve(const string& s, char c) {
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == c)
            return "YES";
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        char c;
        cin >> s >> c;
        cout << solve(s, c) << '\n';
    }
    return 0;
}