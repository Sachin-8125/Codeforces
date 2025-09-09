#include<bits/stdc++.h>
#define ll              long long
#define fio()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
    fio();
    ll t;
    ll x,y,n;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        ll ans = 0;
        ans = n - n % x + y;
        if(ans <= n){
            cout<<ans<<endl;
        }
        else{
            cout<<(n - n % x - (x - y))<<endl;
        }
    }
    return 0;
}
