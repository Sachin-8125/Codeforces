#include <iostream>
#include <string>
using namespace std;

void solve() {
    string t, s;
    cin >> t >> s;
    int idx[256] = {};
    for (int i = 0; i < 26; ++i) idx[t[i]] = i;
    int ans = 0;
    for (size_t i = 1; i < s.size(); ++i)
        ans += abs(idx[s[i]] - idx[s[i - 1]]);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) solve();
}