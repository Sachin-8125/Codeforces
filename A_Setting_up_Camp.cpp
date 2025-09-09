#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long need = (3 - (b % 3)) % 3; 
        if (need > c) {
            cout << -1 << '\n';
            continue;
        }

        c -= need;
        long long tents = a;                      
        tents += (b + need) / 3;                  
        tents += (c + 2) / 3;                     

        cout << tents << '\n';
    }
    return 0;
}
