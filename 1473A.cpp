#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        int a[105];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        sort(a, a + n);
        if (a[n - 1] <= d || (a[0] + a[1] <= d)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}