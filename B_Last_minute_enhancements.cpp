#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int last = 0, ans = 0;

        for(int x : a){
            // if we can put x+1 and remain strictly greater than last
            if(x + 1 > last){
                last = x + 1;
                ans++;
            }
            // else if we can put x itself while still strictly > last
            else if(x > last){
                last = x;
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
