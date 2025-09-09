#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; string s;
    cin >> n >> s;
    ll sq = sqrt(n);
    if (sq * sq == n) {
        ll c1 = ranges::count(s, '1');
        cout << (c1 == sq * 2 + (sq - 2) * 2 ? "YES\n" : "NO\n");
    } else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}