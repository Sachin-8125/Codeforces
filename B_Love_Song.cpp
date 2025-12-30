#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    // Prefix sums of weights
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int weight = (s[i] - 'a' + 1);
        pref[i + 1] = pref[i] + weight;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        long long ans = pref[r] - pref[l - 1];
        cout << ans << "\n";
    }

    return 0;
}
