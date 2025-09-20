#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Array is guaranteed sorted non-decreasing.
        if (a[0] + a[1] <= a[n - 1]) {
            cout << 1 << " " << 2 << " " << n << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}