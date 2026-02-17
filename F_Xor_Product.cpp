#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int64 x, k;
        cin >> x >> k;

        // Check if k is a power of two
        if ((k & (k - 1)) == 0) {
            cout << k << "\n";
            continue;
        }

        // Largest power of two less than k
        int64 p = 1;
        while ((p << 1) <= k) p <<= 1;

        // Compute result
        int64 result = (p << 1) - (x % p);
        cout << result << "\n";
    }
    return 0;
}
