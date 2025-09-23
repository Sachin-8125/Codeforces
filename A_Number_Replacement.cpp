#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string s;
        cin >> s;
        
        map<int, char> num_to_char;
        bool valid = true;
        
        for (int i = 0; i < n; i++) {
            if (num_to_char.find(a[i]) != num_to_char.end()) {
                // Number has been seen before, check if it maps to the same character
                if (num_to_char[a[i]] != s[i]) {
                    valid = false;
                    break;
                }
            } else {
                // Number hasn't been seen before, create new mapping
                num_to_char[a[i]] = s[i];
            }
        }
        
        cout << (valid ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
