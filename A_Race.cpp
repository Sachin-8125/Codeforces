#include <iostream>

using namespace std;

void solve() {
    int a, x, y;
    cin >> a >> x >> y;

    if ((x > a && y > a) || (x < a && y < a)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}