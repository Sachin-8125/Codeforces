#include <iostream>
using namespace std;

int solve() {
    int n, x, sum = 0, total = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += (a[i] == 2);
    }
    for (int i = 0; i < n; ++i) {
        total += (a[i] == 2);
        if (total == sum - total)
            return i + 1;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) cout << solve() << '\n';
}
