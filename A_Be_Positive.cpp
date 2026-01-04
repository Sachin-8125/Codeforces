#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int minus=0, zero=0;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                minus++;
            }
            else if(a[i]==0){
                zero++;
            }
        }
        int count=0;
        int ans = zero;
        if(minus%2!=0){
            ans+=2;
        }
        cout<<ans<<endl;
    }
}