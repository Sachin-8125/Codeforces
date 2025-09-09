#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.rbegin(), a.rend()); // Sort in descending order
        
        if (a[0] == a.back()) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a.back() << " "; // Print smallest element first
            for (int i = 0; i < n - 1; i++) {
                cout << a[i] << " "; // Print remaining elements
            }
            cout << endl;
        }
    }
    
    return 0;
}
