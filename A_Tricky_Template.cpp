#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string a, b, c;
        cin >> a >> b >> c;
        
        bool possible = false;
        
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                if (c[i] != a[i]) {
                    possible = true;
                    break;
                }
            } else {
                if (c[i] != a[i] && c[i] != b[i]) {
                    possible = true;
                    break;
                }
            }
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }
    
    return 0;
}

