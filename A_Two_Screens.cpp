#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--){
        string s, t;
        cin >> s >> t;
        
        int n = s.size();
        int m = t.size();
        
        // Find longest common prefix
        int prefix = 0;
        while (prefix < n && prefix < m && s[prefix] == t[prefix]) {
            prefix++;
        }
        
        // Option 1: just type both
        int ans = n + m;
        
        // Option 2: type prefix, copy, extend
        if(prefix > 0) {
            ans = min(ans, n + m - prefix + 1);
        }
        
        cout << ans << "\n";
    }

    return 0;
}
