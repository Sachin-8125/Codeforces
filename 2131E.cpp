#include <bits/stdc++.h>
using namespace std;

bool canTransform(vector<int>& a, vector<int>& b) {
    int n = a.size();
    vector<int> current = a;
    for (int i = 0; i < n; i++) {
        if (current[i] == b[i]) continue;
        if (i == n - 1) return false;
        current[i] ^= current[i + 1];
        if (current[i] != b[i]) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        if (canTransform(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}