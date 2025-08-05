#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long y = d - b;
        long long x = a + y - c;
        if (x < 0 || y < 0) {
            cout << -1 << '\n';
        } else {
            cout << x + y << '\n';
        }
    }
    return 0;
}
