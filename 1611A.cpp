#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size(), ans = -1;
        if ((s.back() - '0') % 2 == 0) ans = 0;
        else if ((s.front() - '0') % 2 == 0) ans = 1;
        else ans = any_of(s.begin(), s.end(), [](char c){ return (c - '0') % 2 == 0; }) ? 2 : -1;
        cout << ans << '\n';
    }
}
