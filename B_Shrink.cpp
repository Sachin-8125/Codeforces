#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        for(long i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(long i=n-n%2;i>1;i-=2){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}