#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;

        long total = 0, mx = 0;
        for (int i = 0; i < k; ++i) {
            long x;
            cin >> x;
            mx = max(mx, x);
            total += 2 * x - 1;
        }

        total -= 2 * mx - 1;
        cout << total << '\n';
    }
    return 0;
}
