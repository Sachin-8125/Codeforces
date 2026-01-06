#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int ans = 4, cur = 1;
        for (char c : s) {
            int val = (c == '0' ? 10 : c - '0');
            ans += abs(val - cur);
            cur = val;
        }
        cout << ans << '\n';
    }
}
