#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, x, cnt1 = 0, sum = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            sum += x;
            if (x == 1) cnt1++;
        }
        if (sum % 2 == 0 && (cnt1 > 0 || (sum / 2) % 2 == 0)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}