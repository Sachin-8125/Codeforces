#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        long long m, a, b, c, ans = 0;
        cin >> m >> a >> b >> c;
        // For a
        if (a >= m) ans += m;
        else {
            ans += a;
            long long d = m - a, use = min(d, c);
            ans += use; c -= use;
        }
        // For b
        if (b >= m) ans += m;
        else {
            ans += b;
            long long d = m - b, use = min(d, c);
            ans += use; c -= use;
        }
        cout << ans << '\n';
    }
}

