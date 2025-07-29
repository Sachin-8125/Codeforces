#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n; 
        cin >> n;
        vector<ll> a(n);
        ll s = 0;

        for (auto& x : a) {
            cin >> x;
            s += x;
        }

        ll g = s / n;
        bool possible = true;
        ll cur = 0;

        for (ll p = 0; possible && p < n; ++p) {
            cur += (a[p] - g);
            if (cur < 0) {
                possible = false;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
