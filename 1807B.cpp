#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mihai=0,bianca=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]%2==0 ? mihai+=arr[i] : bianca+=arr[i];
        }
        cout<<(mihai>bianca ? "YES" : "NO")<<endl;
    }
}