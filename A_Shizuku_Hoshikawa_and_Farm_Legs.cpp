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
        
        int count = 0;
        
        // Try all possible numbers of cows
        for (int cows = 0; cows * 4 <= n; cows++) {
            int remaining = n - cows * 4;
            
            // Check if remaining legs can be formed by chickens
            if (remaining % 2 == 0) {
                count++;
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}
