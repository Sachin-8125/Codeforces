#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        bool ok = (a == n && b == n) || (a + b + 2 <= n);
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}