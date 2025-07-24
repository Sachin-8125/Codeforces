#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n < 10) cout << n << endl;
        else {
            int ans = 9;
            for(int i = 10, j = 1; i <= n; ++j){
                int k = i * j;
                if(k > n) break;
                ++ans;
                if(j == 10){
                    j = 1;
                    i = i * 10;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
