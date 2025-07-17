#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;
    while (t--) {
        long n, k, p;
        cin >> n >> k >> p;
        // Check if k is outside possible range, if so, output -1 and continue
        if (k < -n * p || k > n * p) {
            cout << -1 << '\n';
            continue;
        }
        // Work with |k|
        if (k < 0) k = -k;
        // Minimum number of steps
        cout << (k + p - 1) / p << '\n';
    }
    return 0;
}