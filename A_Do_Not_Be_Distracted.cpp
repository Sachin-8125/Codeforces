#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        unordered_set<char> seen;
        bool bad = false;
        for (int i = 0; i < n; ++i) {
            if (i && s[i] != s[i-1] && seen.count(s[i]))
                bad = true;
            seen.insert(s[i]);
        }
        cout << (bad ? "NO\n" : "YES\n");
    }
}