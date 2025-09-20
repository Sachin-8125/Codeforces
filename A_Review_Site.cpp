#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if(x == 1 || x == 3) ans++; // Accept if reviewer votes 1 (love) or 3 (accept)
        }
        cout << ans << endl;
    }
    return 0;
}
