#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        ll a[3], n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a + 3);
        ll need = (a[2] - a[0]) + (a[2] - a[1]);
        n -= need;
        if (n >= 0 && n % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
