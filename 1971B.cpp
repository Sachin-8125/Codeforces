#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        bool changed = false;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] != s[i-1]) {
                swap(s[i], s[i-1]);
                changed = true;
                break;
            }
        }
        cout << (changed ? "YES\n" + s : "NO") << '\n';
    }
}
