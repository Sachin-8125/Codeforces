#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for (auto &v : a) cin >> v;
        sort(a.rbegin(), a.rend());
        int cnt = 1, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] * cnt >= x) ans++, cnt = 1;
            else cnt++;
        }
        cout << ans << '\n';
    }
}