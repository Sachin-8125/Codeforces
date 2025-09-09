#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto& x : arr) cin >> x;

    int neg = count(begin(arr), end(arr), -1);
    int pos = n - neg;
    int ans = 0;

    // Negate -1 to 1, increase pos, decrease neg, until diff non-neg and neg even
    while ((pos - neg) < 0 || (neg % 2)) {
        neg--;
        pos++;
        ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) solve();
}