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
        if (n % 2 == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        int m = n / 2; // need m runs of length >= 2, each adds 2 specials
        string ans;
        ans.reserve(3 * m); // rough upper bound
        for (int i = 0; i < m; ++i) {
            ans += "AA";
            if (i + 1 < m) ans += 'B'; // separator to avoid merging runs
        }
        cout << ans << "\n";
    }
    return 0;
}