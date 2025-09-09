#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> digits(n);
    for (auto& d : digits) cin >> d;

    for (int i = 0; i < n; ++i) {
        int b;
        string s;
        cin >> b >> s;

        for (char c : s)
            digits[i] = (c == 'U') ? (digits[i] + 9) % 10 : (digits[i] + 1) % 10;
    }

    for (auto d : digits) cout << d << ' ';
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
