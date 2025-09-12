#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(a.begin(), a.end());
    if (n == 1) {
        if (a[0] == 1) cout << "YES\n";
        else cout << "NO\n";
        return;
    }
    if (a[n-1] - a[n-2] > 1) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
