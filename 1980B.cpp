#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int fav = a[f - 1];
        int certainty = -1;  // 0 → YES, 1 → MAYBE, 2 → NO

        sort(a.rbegin(), a.rend());

        for (int i = 0; i < k; ++i) {
            if (a[i] == fav) {
                certainty = 0; // YES initially
                break;
            }
        }

        for (int i = k; i < n; ++i) {
            if (a[i] == fav) {
                if (certainty == 0) certainty = 1; // MAYBE
                else certainty = 2; // NO
                break;
            }
        }

        if (certainty == 0) cout << "YES\n";
        else if (certainty == 1) cout << "MAYBE\n";
        else cout << "NO\n";
    }

    return 0;
}
