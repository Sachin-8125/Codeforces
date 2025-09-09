#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            int mini=min(arr[i],arr[i-1]), maxi=max(arr[i],arr[i-1]);
            while(mini*2<maxi){
                mini *= 2;
                ++ans;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}