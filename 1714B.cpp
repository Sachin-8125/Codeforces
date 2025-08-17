#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n+1]={0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[a[i]]++;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            if(b[a[i]]>1){
                b[a[i]]--;
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
