#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> w(n);
        for (long long& x : w) cin >> x;
        sort(w.rbegin(), w.rend());
        long long mult = 1, cnt = 0;
        for (long long p = 0; p < n; ++p) {
            if (mult * w[p] > c)
                ++cnt;
            else
                mult *= 2;
        }
        cout << cnt << '\n';
    }
}
