#include <bits/stdc++.h>
using namespace std;

void solve() {
    int64_t n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ops = 0;
    for (int i = 0; i < n; ++i)
        if (s[i] == 'B') {
            ++ops;
            i += k - 1;
        }
    cout << ops << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
