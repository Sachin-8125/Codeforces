#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> result;
        
        if (k == 0) {
            // For 0 excitements, use decreasing order
            for (int i = n; i >= 1; i--) {
                result.push_back(i);
            }
        } else {
            // Start with 1
            result.push_back(1);
            
            // Add the largest k numbers in increasing order
            for (int i = n - k + 1; i <= n; i++) {
                result.push_back(i);
            }
            
            // Add the remaining numbers in decreasing order
            for (int i = n - k; i >= 2; i--) {
                result.push_back(i);
            }
        }
        
        // Output the result
        for (int i = 0; i < n; i++) {
            cout << result[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}