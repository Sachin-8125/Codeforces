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
        int count = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                ans = max(ans,++count);
            }else{
                count = 0;
            }
        }
        cout<<ans<<endl;
    }
}