#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to calculate count of numbers divisible by x in range [1, n]
ll countDivisible(ll n, ll x) {
    return n / x;
}

// Inclusion-Exclusion to count numbers divisible by 2,3,5,7 in [1,n]
ll countBad(ll n) {
    if (n == 0) return 0;

    vector<int> primes = {2, 3, 5, 7};
    ll count = 0;

    int sz = primes.size();
    for (int mask = 1; mask < (1 << sz); ++mask) {
        ll lcm = 1;
        int bits = 0;
        for (int j = 0; j < sz; ++j) {
            if (mask & (1 << j)) {
                lcm *= primes[j];
                bits++;
            }
        }
        if (bits % 2)
            count += n / lcm;
        else
            count -= n / lcm;
    }
    return count;
}

// Good numbers in [l, r] = total numbers - bad numbers
ll countGood(ll l, ll r) {
    ll total = r - l + 1;
    ll bad = countBad(r) - countBad(l - 1);
    return total - bad;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << countGood(l, r) << '\n';
    }

    return 0;
}
