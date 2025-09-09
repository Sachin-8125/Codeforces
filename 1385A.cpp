#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a[3];
        for (int &x : a) cin >> x;
        int mx = *max_element(a, a+3), mn = *min_element(a, a+3);
        int cnt = count(a, a+3, mx);
        if (cnt == 1) cout << "NO\n";
        else cout << "YES\n" << mx << ' ' << mn << ' ' << mn << '\n';
    }
}
