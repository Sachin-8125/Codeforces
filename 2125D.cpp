#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MOD = 998244353;

ll modpow(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a, ll mod = MOD) {
    return modpow(a, mod - 2, mod);
}

struct Segment {
    int l, r;
    ll p, q;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<Segment> segments(n);
    for (int i = 0; i < n; i++) {
        cin >> segments[i].l >> segments[i].r >> segments[i].p >> segments[i].q;
    }
    
    ll result = 0;
    
    // Enumerate all possible subsets of segments
    for (int mask = 0; mask < (1 << n); mask++) {
        // Calculate probability of this subset appearing
        ll prob = 1;
        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                // Segment i appears
                prob = prob * segments[i].p % MOD * modinv(segments[i].q) % MOD;
            } else {
                // Segment i doesn't appear
                ll not_prob = (segments[i].q - segments[i].p + MOD) % MOD;
                prob = prob * not_prob % MOD * modinv(segments[i].q) % MOD;
            }
        }
        
        // Check if each cell is covered by exactly one segment
        bool valid = true;
        for (int cell = 1; cell <= m && valid; cell++) {
            int coverage = 0;
            for (int i = 0; i < n; i++) {
                if ((mask & (1 << i)) && segments[i].l <= cell && cell <= segments[i].r) {
                    coverage++;
                }
            }
            if (coverage != 1) {
                valid = false;
            }
        }
        
        if (valid) {
            result = (result + prob) % MOD;
        }
    }
    
    cout << result << "\n";
    return 0;
}