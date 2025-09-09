#include <iostream>
using namespace std;
int main() {
    int T; cin >> T;
    while (T--) {
        int n, res = 0, mx = -1;
        cin >> n;
        for (int i = 1, m, q; i <= n; ++i) {
            cin >> m >> q;
            if (m <= 10 && q > mx) mx = q, res = i;
        }
        cout << res << '\n';
    }
}