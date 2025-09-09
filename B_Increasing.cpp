#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = true;
        sort(arr,arr+n);
        if(n==1) cout<<"YES"<<endl;
        else{
            for(int i=0;i<n-1;i++){
                if(arr[i] == arr[i+1]){
                    flag = false;
                    break;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}