#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;

        int da = abs(x - a);
        int db = abs(y - a);

        bool sameSide = ( (x - a) * (y - a) > 0 );

        if (sameSide && min(da, db) > 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
