#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main(){
    fastread();
    int t,n,a[100];
    cin>>t;
    while(t--){
        int c = 0,flag = 0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int odd = 0,even = 0;
        for(int i=0; i<n; i++){
            if(i%2 != a[i] % 2){
                if(a[i] % 2 == 1)odd++;
                else even++;
            }
        }
        cout<<(odd!=even?-1:even)<<endl;
    }
    return 0;
}