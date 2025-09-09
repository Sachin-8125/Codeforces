#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long d = b - a;
        long long l = 1, r = d + 7, res = 1;

        while (l <= r) {
            long long mid = (l + r) / 2;
            long long tst = mid * (mid - 1) / 2;
            if (tst <= d) {
                res = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
