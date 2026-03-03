#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    long long rem = 2023;
    bool possible = true;
    
    for (int i = 0; i < n; ++i) {
        long long b;
        cin >> b;
        if (rem % b == 0) rem /= b;
        else possible = false;
    }
    
    if (possible) {
        cout << "YES\n";
        cout << rem << " ";
        for (int i = 1; i < k; ++i) cout << 1 << " ";
        cout << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Optimize standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}