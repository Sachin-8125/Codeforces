#include <iostream>
using namespace std;
int main() {
    string s, t;
    cin >> s;
    for (int i = 0; i < 5; ++i) {
        cin >> t;
        if (t[0] == s[0] || t[1] == s[1]) return cout << "YES\n", 0;
    }
    cout << "NO\n";
}